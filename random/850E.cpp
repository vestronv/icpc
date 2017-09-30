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
const int N = 300005; // 10^5
int n, m;
vector<int> g[N], shop[N];
set<int> clr;
int ans[N];
//.............data...................

//.............functions...................
void solve(int node, int parent){
	vector<int>cache;
	vector<int> :: iterator vit;
	vit = shop[node].begin();
	for(; vit != shop[node].end(); vit++){
		if(ans[*vit] != -1){
			clr.erase(ans[*vit]);
			cache.push_back(ans[*vit]);
			}
		}
	vit = shop[node].begin();
	for(; vit != shop[node].end(); vit++){
		if(ans[*vit] == -1){
			ans[*vit] = *clr.begin();
			cache.push_back(*clr.begin());
			clr.erase(*clr.begin());
			}
		}
	vit = cache.begin();
	for(; vit != cache.end();vit++){
		clr.insert(*vit);
		}
	vit = g[node].begin();
	for(; vit != g[node].end(); vit++){
		if(*vit == parent)continue;
		solve(*vit, node);
		}
	}
//.............functions...................

//.............main...................
int main(){
	boost;
	memset(ans, -1, sizeof ans);
	int i, maxClr = -1;
	cin >> n >> m;
	for(i = 1; i <= n; i++){
		int si;
		cin >> si;
		maxClr = max(maxClr, si);
		for(int j = 1; j <= si; j++){
			int clr_;
			cin >> clr_;
			shop[i].push_back(clr_);
			}
		}
	for(i = 1; i < n; i++){
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
		}
	for(i = 1; i <= m; i++){
		clr.insert(i);
		}
	solve(1, -1);
	cout << maxClr << endl;
	for(i = 1; i <= m; i++){
		cout << ans[i] << " ";
		}
	return 0;
	}
