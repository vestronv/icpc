#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 200005;
int n, m, q;
int t[N], L[N], R[N], arr[N];
int solve(int idx){
	for(int i = m; i >=1 ; i--){
		if(L[i] > idx || R[i] < idx)continue;
		if(t[i] == 1){// shift
			if(idx == L[i])idx = R[i];
			else idx--;
			}
		else{
			idx = L[i] + R[i] - idx;
			}
		}
	return idx;
	}
int main(){
	boost;
	int i;
	cin >> n >> m >> q;
	for(i = 1; i <= n; i++){
		cin >> arr[i];
		}
	for(i = 1; i <= m; i++){
		cin >> t[i] >> L[i] >> R[i];
		}
	for(i = 0; i < q; i++){
		int idx;
		cin >> idx;
		cout << arr[solve(idx)] << " ";
		}
	return 0;
	}
