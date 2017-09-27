#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 100005;
ll b[N];
set<ll>v;
set<ll> :: iterator vit;
int sign(int i){
	if(i & 1)return 1;
	return -1;
	}
ll absl(ll x){
	if(x > 0)return x;
	return -x;
	}
int main(){
	boost;
	int i, n, m, q, l, r;
	ll x, first = 0ll, temp = 0ll, ele;
	cin >> n >> m >> q;
	for(i = 1; i <= n; i++){
		cin >> ele;
		first += (ele * sign(i));
		}
	for(i = 1; i <= n; i++){
		cin >> b[i];
		temp += (sign(i + 1))*b[i];
		}
	v.insert(temp);
	for(i = n + 1; i <= m; i++){
		cin >> b[i];
		temp += b[i-n];
		temp = -temp;
		temp +=sign(n + 1)*b[i];
		v.insert(temp);
		}
	ll ans;
	vit = v.lower_bound(-first);
	if(vit == v.end()){
		vit--;
		}
	ans = absl(*vit - (-first));// formal way
	if(vit != v.begin()){
		vit--;
		}
	ans = min(ans, absl(*vit - (-first)));
	cout << ans << endl;
	while(q--){
		cin >> l >> r >> x;
		if(((r - l + 1) & 1)){
			if(l & 1)first += x;
			else first -= x;
			vit = v.lower_bound(-first);
			if(vit == v.end()){
				vit--;
				}
			ans = absl(*vit - (-first));
			if(vit != v.begin()){
				vit--;
				}
			ans = min(ans, absl(*vit - (-first)));
			}
		else{
			}
		cout << ans << endl;
		}
	return 0;
	}

