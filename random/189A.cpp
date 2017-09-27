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
const int N = 10005; // 10^4
ll n, a, b, c;
ll dp[N];
//.............data...................

//.............functions...................
ll solve(ll cur){
	if(cur < 0ll)return -99999999999ll;
	if(cur == 0ll)return 0ll;
	if(dp[cur] != -1)return dp[cur];
	return dp[cur] = max(1 + solve(cur - a), max(1 + solve(cur - b), 1 + solve(cur - c)));
	}
//.............functions...................

//.............main...................
int main(){
	memset(dp, -1, sizeof dp);
	cin >> n >> a >> b >> c;
	cout << solve(n);
	return 0;
	}
