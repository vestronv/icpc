#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const ll N = 10000000001ll;
vector<ll>heads, toread;
int main(){
	int n ,m, i;
	ll ele;
	cin >> n >> m;
	for(i = 0; i < n; i++){
		cin >> ele;
		heads.push_back(ele);
		}
	for(i = 0; i < m; i++){
		cin >> ele;
		toread.push_back(ele);
		}
	ll lo = 0ll, hi = 3 * N;
	while(lo < hi){
		ll mid = (lo + hi) >> 1;
		vector<ll> :: iterator vit1, vit2;
		vit1 = heads.begin();
		vit2 = toread.begin();
		for(; vit1 != heads.end(); vit1++){
			ll from, to;
			from = to = *vit1;
			for(; vit2 != toread.end(); vit2++){
				from = min(from, *vit2);
				to = max(to, *vit2);
				ll time__ = to - from + min(to - *vit1, *vit1 - from);
				if(time__ > mid){
					break;
					}
				}
			}
		if(vit2 != toread.end()){
			lo = mid + 1;
			}
		else hi = mid;
		}
	cout << lo;
	return 0;
	}
