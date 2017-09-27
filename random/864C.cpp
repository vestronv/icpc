#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 1000005; // 10^6
ll a, b, f, k;
vector<ll>gas;
void pre(){
	//gas.push_back(f);
	ll cur = f;
	while(cur <= k * a){
		cur += a;
		gas.push_back(cur);
		}
	}
int main(){
	cin >> a >> b >> f >> k;
	ll onego = b / a;
	if(onego >= k){
		cout << 0;
		return 0;
		}
	if(b < f){
		cout << -1;
		return 0;
		}
	ll jump = (a * (b / a)) + f;
	if(jump < 2 * f || jump < 2 * (a - f)){
		cout << -1;
		return 0;
		}
	pre();
	ll cur = jump;
	ll ans = 0;
	while(cur < k * a){
		ans++;
		cur += b;
		int i = 0;
		while(gas[i] < cur)i++;
		}
	cout <<ans;
	return 0;
	}


