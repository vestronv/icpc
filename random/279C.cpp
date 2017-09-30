// copy From Here
// GOD give me spped to solve fast...
#include <bits/stdc++.h>
using namespace std;
// bad times...

//.............template...................
#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
//.............template...................

//.............data...................
const int N = 100005; // 10^5
int arr[N], incr[N], decr[N];
//.............data...................

//.............functions...................

//.............functions...................

//.............main...................
int main(){
	boost;
	int n, q, i, p = 1;
	cin >> n >> q;
	arr[0] = INT_MAX;
	for(i = 1; i <=n ; i++){
		cin >> arr[i];
		if(arr[i] >= arr[i - 1]){
			incr[i] = p++;
			}
		else{
			incr[i] = 1;
			p =  2;
			}
		}
	arr[n + 1] = INT_MIN;
	p = 1;
	for(i = 1; i <= n; i++){
		if(arr[i] <= arr[i - 1]){
			decr[i] = p++;
			}
		else{
			decr[i] = 1;
			p = 2;
			}
		}
	//cout << endl;
	//for(i = 1; i <= n; i++){
	//	cout << decr[i] << " ";
	//	}
	while(q--){
		int l, r;
		cin >> l >> r;
		if(r - l < 2){
			if(r == l){
				cout << "Yes\n";
				}
			else {
				if(arr[l] >= arr[r]){
					cout << "Yes\n";
					}
				else{
					cout << "Yes\n";
					}
				}
			}
		else{
			// 1 2 1 3 3 5 2 1
			int since = decr[r];
			int since_ = r - since;
			//cout << since_ << " " << since << endl;
			if(incr[since_] >= r - l + 1 - since){
				cout << "Yes\n";
				}
			else{
				cout << "No\n";
				}
			}
		}
	return 0;
	}

