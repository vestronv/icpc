#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 100005;
ll segt[4 * N], arr[N], n;
int BY[N], L[N], R[N], freq[N];
void build(int idx = 0, int st = 0, int en = n){
	if(st == en){
		segt[idx] = arr[st];
		return ;
		}
	int mid = (l + r) >> 1;
	build(2 * idx + 1, st, mid);
	build(2 * idx + 2, mid + 1, en);
	}
ll query(int idx = 0, int st = 0, int en = n, int l, int r){
	return 0ll;
	}
int main(){
	int m, k, i;
	cin >> n >> m >> k;
	for(i = 0; i < n; i++)cin >>arr[i];
	//build();
	for(i = 1; i <= m; i++){
		int l, r, by;
		cin >> l >> r >> by;
		L[i] = l;
		R[i] = r;
		BY[i] = by;
		}
	while(k--){
		int from, to;
		cin >> from >> to;
		freq[to]++;
		freq[from-1]--;
		}
	for(i = N; i > 0; i--){
		freq[i] += freq[i-1];
		}
	for(i = 1; i < N; i++){
		if(freq[i] > 0){
			
			
			}
		}
	return 0;
	}
