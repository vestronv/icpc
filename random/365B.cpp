#include <iostream>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
const int N = 100005;
int arr[N];
int max(int a, int b){
	return a > b ? a : b;
	}
int main(){
	boost;
	int n, i;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> arr[i];
		}
	if(n < 3){
		cout << n;
		return 0;
		}
	int ans = 2, cur = 2;
	for(i = 2; i < n; i++){
		if(arr[i] == arr[i-1] + arr[i-2]){
			cur++;
			}
		else{
			ans = max(ans, cur);
			cur = 2;
			}
		}
	ans = max(ans, cur);
	cout << ans;
	return 0;
	}
