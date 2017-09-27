#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 200005;
vector<int>arr;
vector<vector<int> >helper;
map<int, int>mp;//vector not needed, oops
int mark[N];
int main(){
	boost;
	int n, q, i;
	cin >> n >> q;
	for(i = 0; i < n; i++){
		int ele;
		cin >> ele;
		arr.push_back(ele);
		}
	while(q--){
		int l, r;
		cin >> l >> r;
		mark[r]++;
		mark[l-1]--;
		}
	for(i = n - 1; i >= 1; i--){
		mark[i] += mark[i+1];
		}
	for(i = n; i >= 1; i--){
		mp[mark[i]]++;
		}
	map<int, int> :: reverse_iterator mit;
	sort(arr.begin(), arr.end());
	ll ans = 0ll;
	int k = n - 1;
	for(mit = mp.rbegin(); mit != mp.rend(); mit++){
		int freq = (*mit).first;
		int times = (*mit).second;
		while(times--){
			ans += (ll)((ll)freq * (ll)arr[k--]);
			}
		}
	cout << ans;
	return 0;
	}
