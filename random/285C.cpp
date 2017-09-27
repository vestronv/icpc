#include <iostream>
#include <algorithm>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
const int N = 300005;
int arr[N];
int main(){
	boost;
	int n, i;
	cin >> n;
	for(i = 1; i<=n; i++){
		cin >> arr[i];
		}
	sort(arr + 1, arr + n + 1);
	long long ans = 0;
	for(i = 1; i<=n; i++){
		ans += abs((long long)(i - arr[i]));
		}
	cout << ans;
	return 0;
	}
