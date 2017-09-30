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
const int N = 105;
const int mod = 1000000007;
int n, k, d;
ll dp[N][N][2];
//.............data...................

//.............functions...................
ll solve(int curNode, int needMore, int valid){
	if(needMore < 0 )return 0ll;
	if(needMore == 0 && valid){
		return dp[curNode][needMore][1] = 1ll;
		}
	if(needMore == 0 && !valid){
		return dp[curNode][needMore][valid] = 0ll;
		}
	if(dp[curNode][needMore][valid] != -1)return dp[curNode][needMore][valid];
	ll ans = 0;
	for(int i = 1; i <= k; i++){
		ans += solve(i, needMore - i, valid || (i >= d ? 1 : 0));
		ans %= mod;
		}
	ans %= mod;
	return dp[curNode][needMore][valid] = ans;
	}
//.............functions...................

//.............main...................
int main(){
	memset(dp, -1, sizeof dp);
	cin >> n >> k >> d;
	ll ans = 0;
	for(int i = 1; i <= k; i++){
		ans += solve(i, n - i, (i >= d ? 1 : 0));
		ans %= mod;
		}
	cout << ans;
	return 0;
	}

