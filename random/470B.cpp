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
const int N = 1005; // 10^4
const int mod = 1000000007;
int n;
int p[N], mark[N];
ll dp[N];
//.............data...................

//.............functions...................
ll solve(int room){
	if(room <= 1)return 0ll;
	if(dp[room] != -1)return dp[room];
	return dp[room] = ((2ll * (solve(room - 1)) % mod + 2) % mod - (solve(p[room - 1]) % mod)) % mod;
	}
//.............functions...................

//.............main...................
int main(){
	memset(dp, -1, sizeof dp);
	int i;
	cin >> n;
	mark[1] = 1;
	for(i = 1; i <= n; i++){
		cin >> p[i];
		}
	cout << (solve(n + 1) + mod ) % mod << endl;
	return 0;
	}

