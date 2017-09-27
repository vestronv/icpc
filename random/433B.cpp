#include <iostream>
#include <algorithm>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 100005;
ll pre1[N], pre2[N], arr[N];
int main(){
	boost;
	int n, i;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> arr[i];
		pre1[i+1] = arr[i];
		pre1[i+1] += pre1[i];
		}
	sort(arr, arr + n);
	for(i = 0; i < n; i++){
		if(i)arr[i] += arr[i-1];
		}
	cout << arr[2] << " " << arr[3] << " " << arr[4] << endl;
	int q;
	cin >> q;
	while(q--){
		int typ, l ,r;
		cin >> typ >> l >> r;
		if(typ == 1){
			cout << pre1[r] - pre1[l-1] << endl;
			}
		else{
			l--; r--;
			cout << arr[r] - ( (l > 0) ? arr[l - 1] : 0) << endl;
			}
		}
	return 0;
	}
