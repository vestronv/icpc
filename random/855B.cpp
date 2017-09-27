#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 1000005; // 10^6
ll arr[N], pmn[N], smn[N], pmx[N], smx[N];
ll max_(ll a, ll b, ll c){
	return max(a, max(b, c));
	}
int main(){
	int n, i;
	//ll a, b, c, ans = LLONG_MIN;
	ll a, b, c, ans = -99999999999999999ll;
	cin >> n >> a >> b >> c;
	for(i = 0; i < n; i++){
		cin >> arr[i];
	}
	pmn[0] = arr[0];
	pmx[0] = arr[0];
	smn[n-1] = arr[n-1];
	smx[n-1] = arr[n-1];
	ans = ((a * arr[0]) + (b * arr[0]) + (c * arr[0]));
	for(i = 1; i < n; i++){
		pmn[i] = min(pmn[i-1], arr[i]);
		pmx[i] = max(pmx[i-1], arr[i]);
		}
	for(i = n-2; i >= 0; i--){
		smn[i] = min(smn[i+1], arr[i]);
		smx[i] = max(smx[i+1], arr[i]);
		}
	for(i = 0; i < n; i++){
		ll lo, hi, mid;
		mid = b * arr[i];
		lo = max(a * pmx[i], a * pmn[i]);
		hi = max(c * smx[i], c * smn[i]);
		ans = max(ans, lo + mid + hi);
		}
	cout << ans;
	return 0;
	}
