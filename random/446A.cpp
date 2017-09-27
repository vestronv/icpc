#include <iostream>
#include <algorithm>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 100005;
const ll MAX = 9999999999999999ll;
const ll MIN = -9999999999999999ll;
ll arr[N];
int inc[N], decr[N];
int max(int a, int b){
	return a > b ? a : b;
	}
bool issortedup(int n){
	for(int i = 1; i <= n; i++){
		if(arr[i] <= arr[i - 1])return false;
		}
	return true;
	}
int main(){
	boost;
	int n, i;
	cin >> n;
	arr[0] = MIN;
	for(i = 1; i <= n; i++){
		cin >> arr[i];
		}
	arr[n+1] = MAX;
	int idx = 1;
	for(i = 1; i <= n; i++){
		if(arr[i] > arr[i-1]){
			continue;
			}
		else{
			inc[idx++] = i - 1;
			}
		}
	inc[idx] = n;
	idx = 1;
	for(i = n; i >= 0; i--){
		if(arr[i] < arr[i+1]){
			continue;
			}
		else{
			decr[idx++] = i + 1;
			}
		}
	decr[idx] = 1;
	int ans = -1;
	for(i = 1; i <= idx; i++){
		ans = max(ans, inc[i] - decr[idx - i + 1] + 1);
		}
	if(n>1)ans++;
	for(i = 1; i <= idx; i++){
		if(i > 1){
			ans = max(ans, inc[i] - decr[idx - i + 1] + 1);
			//cout << decr[idx - i + 1] << " ";
			//cout << inc[i - 1] - 1 << " ";
			//cout << arr[decr[idx - i + 1]] - arr[inc[i - 1] - 1] << endl;
			
			//cout << inc[i] << " " << decr[idx-i+2] << endl;
			if(arr[decr[idx - i + 1]] - arr[inc[i - 1] - 1] >= 2ll)ans = max(ans, inc[i] - decr[idx - i + 2] + 1);
			else if(arr[decr[idx - i + 1] + 1] - arr[inc[i - 1]] >= 2ll)ans = max(ans, inc[i] - decr[idx - i + 2] + 1);
			}
		else{
			ans = max(ans, inc[i] - decr[idx - i + 1] + 1);
			}
		//cout << "cur ans = " << ans << endl;
		}
	if(issortedup(n))ans--;
	cout << ans;
	return 0;
	}
