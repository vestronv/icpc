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
vector<pair<int, int> >ans;
//.............data...................

//.............functions...................

//.............functions...................

//.............main...................
int main(){
	int n, m, i, x, y = 0;
	cin >> n >> m;
	x = min(n, m);
	cout << min(n, m) + 1 << endl;
	for(i = 0; i <= min(n, m); i++){
		ans.push_back(make_pair(x, y));
		x--;
		y++;
		}
	
	for(i = 0; i < (int)ans.size(); i++){
		cout << ans[i].first << " " << ans[i].second << endl;
		}
	return 0;
	}
