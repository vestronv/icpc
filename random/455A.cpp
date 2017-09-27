#include <iostream>
#include <algorithm>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 100005;
int freq[N];
ll dp[N];
ll max(ll a, ll b){
	return a > b ? a: b;
	}
ll solve(int n){
	if(n <= 0)return 0;
	if(dp[n] != -1)return dp[n];
	return dp[n] = max(solve(n - 1), solve(n - 2) + (ll)((ll)n * freq[n]));
	}
int main(){
	boost;
	memset(dp, -1, sizeof dp);
	int n, i, maxi = -1;
	cin >> n;
	for(i = 0; i < n; i++){
		int ele;
		cin >> ele;
		freq[ele]++;
		maxi = maxi > ele ? maxi : ele;
		}
	cout << solve(maxi);
	return 0;
	}
