#include <bits/stdc++.h>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 300005;
int departure[N];
set<pair<int,int> >st;
map<int, int>used;
set<pair<int,int> > :: reverse_iterator sit;
int main(){
	boost;
	int n, k, i, ele, idx, next;
	cin >> n >> k;
	next = k + 1;
	for(i = 1; i <= n; i++){
		cin >> ele;
		st.insert(make_pair(ele,i));
		}
	sit = st.rbegin();
	ll ans = 0ll;
	for(; sit != st.rend(); sit++){
		ele = (*sit).first;
		idx = (*sit).second;
		if(idx > k){
			if(!used[idx]){
				used[idx] = 1;
				departure[idx] = idx;
				continue;
				}
			while(used[next])next++;
			departure[idx] = next;
			ans += (ll)(next - idx) * ele;
			used[next] = 1;
			}
		else{
			while(used[next])next++;
			departure[idx] = next;
			ans += (ll)(next - idx) * ele;
			used[next] = 1;
			}
		//cout << ele << " ";
		}
	cout << ans << endl;
	for(i = 1; i <= n; i++){
		cout << departure[i] << " ";
		}
	return 0;
	}

