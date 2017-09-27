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
struct node{
	int t, d, p, idx;
	};
node packet[N];
int n, ans;
int dp[N][2 * N * N];
vector<int>path;
//.............data...................

//.............functions...................
bool cmp(node a, node b){
	if(a.d == b.d)return a.p > b.p;
	return a.d < b.d;
	}
int solve(int idx, int tym){
	if(idx >= n)return 0;
	if(dp[idx][tym] != -1) return dp[idx][tym];
	if(packet[idx].d <= packet[idx].t + tym)return solve(idx + 1, tym);
	return dp[idx][tym] = max(solve(idx + 1, tym + packet[idx].t) + packet[idx].p, 
			solve(idx + 1, tym));
	// take, don't take
	}
void solve2(int idx, int tym){
	if(idx >= n)return ;
	int curAns = 0;
	if(packet[idx].d > packet[idx].t + tym){
		curAns = solve(idx + 1, packet[idx].t + tym) + packet[idx].p;
		}
	else curAns = -1;
	//curAns = solve(idx, tym);
	if(solve(idx, tym) == curAns){
		path.push_back(idx);
		solve2(idx + 1, tym + packet[idx].t);
		}
	else{
		solve2(idx + 1, tym);
		}
	}
//.............functions...................

//.............main...................
int main(){
	memset(dp, -1, sizeof(dp));
	int i;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> packet[i].t;
		cin >> packet[i].d;
		cin >> packet[i].p;
		packet[i].idx = i + 1;
		}
	sort(packet, packet + n, cmp);
	ans = solve(0, 0);// idx, tym
	solve2(0,0);
	cout << ans << endl;
	cout << path.size() << endl;
	for(i = 0; i < (int)path.size(); i++){
		cout << packet[path[i]].idx << " ";
		}
	return 0;
	}

