#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 105;
int arr[N];
int main(){
	int i, j, n, ans = INT_MAX;
	cin >> n;
	for(i = 1; i <= 2 * n ; i++){
		cin >> arr[i];
		}
	for(i = 1; i <= 2 * n; i++){
		for(j = i + 1; j <= 2 * n; j++){
			vector<int>cur;
			int cura = 0;
			for(int k = 1; k <= 2 * n; k++){
				if(k != i && k != j)
					cur.push_back(arr[k]);
				}
			sort(cur.begin(), cur.end());
			for(int p = 1; p <= (int)cur.size() - 1; p += 2){
				cura += cur[p] - cur[p-1];
				}
			ans = min(ans, cura);
			}
		}
	cout << ans;
	return 0;
	}

