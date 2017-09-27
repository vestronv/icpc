#include <iostream>
#include <stdio.h>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 500005;
int arr[N];
ll pre[N];
//10 1 2 -4 -5 6 4 -2 1 2 -1
int main(){
	int n, i;
	ll sum = 0;
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> arr[i];
		pre[i] = arr[i] + pre[i-1];
		sum += arr[i];
		}
	ll ans = 0;
	if(sum % 3 == 0){
		sum /= 3;
		for(i = 1; i <= n; i++){
			if(pre[i] == sum)arr[i] = 1 + arr[i-1];
			else arr[i] = arr[i-1];
			//cout << arr[i] << " ";
			}
		for(i = 2; i <= n-1; i++){
			if(pre[i] == 2 * sum){
				ans += arr[i-1];
				}
			}
		}
	cout << ans;
	return 0;
	}
