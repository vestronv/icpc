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
const int N = 1000005; // 10^6
//.............data...................

//.............functions...................

//.............functions...................

//.............main...................
int main(){
	int n, i;
	ll ans = 0;
	cin >> n;
	for(i = 1 ; i <= n-1; i++){
		ans += (ll)(n - i) * (i);
		}
	ans += (ll)n;
	cout << ans;
	return 0;
	}

