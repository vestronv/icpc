#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 100005;
const int R = 1, B = 2;
int n, clr[N], deg[N], vis[N];
vector<int>g[N];
int max(int a, int b){
	return a > b ? a : b;
	}
int main(){
	boost;
	int n, i;
	cin >> n;
	for(i = 0; i < n-1; i++){
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
		deg[u]++;
		deg[v]++;
		}
	queue<int>q;
	q.push(1);
	clr[1] = R;
	while(!q.empty()){
		//cout << "hi ";
		int u = q.front();
		q.pop();
		vis[u] = 1;
		int now_clr = clr[u];
		int alt_clr = now_clr == R ? B : R;
		for(i = 0; i < (int)g[u].size(); i++){
			if(vis[g[u][i]])continue;
			q.push(g[u][i]);
			clr[g[u][i]] = alt_clr;
			}
		}
	int rc = 0, bc = 0;
	for(i = 1; i <= n; i++)if(clr[i] == R)rc++; else if(clr[i] == B)bc++;
	ll ans = 0, p = 0;
	for(i = 1; i <= n; i++){
		if(clr[i] == R){
			ans += (ll)((ll)bc - deg[i]);
			}
		else if(clr[i] == B){
			ans += (ll)((ll)rc - deg[i]);
			}
		else{
			p++;
			}
		}
	//cout << ans;
	cout << ans/2;// + p * max(bc, rc);
	return 0;
	}
/*
6
1 2
1 3
4 2
4 3
5 3
*/
