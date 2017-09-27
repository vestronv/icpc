#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 200005;
int q;
pair<int,pair<int,int> >tv[N];
bool ok(int idx){
	if(idx == 0)return (tv[idx].first == tv[idx + 1].first);
	else if(idx == (q - 1))return (tv[idx].second.first <= tv[idx - 1].second.first);
	if(tv[idx].first == tv[idx + 1].first)return true;
	if((tv[idx - 1].second.first >= tv[idx].first) &&
		((tv[idx - 1].second.first >= tv[idx].second.first) )	)return true;//overlap with prev
	return (tv[idx - 1].second.first + 1 >= tv[idx + 1].first && 
			(tv[idx].second.first <= tv[idx + 1].second.first));
	//return ( (tv[idx - 1].second.first >= tv[idx].first) && 
	//		(tv[idx].second.first <= tv[idx + 1].second.first) &&
	//		(tv[idx].second.first >= tv[idx + 1].first)	);
	}
int main(){
	int i, l, r;
	cin >> q;
	i = 0;
	for(i = 0; i< q; i++){
		cin >> l >> r;
		tv[i] = make_pair(l, make_pair(r, i));
		}
	sort(tv, tv + q);
	if(q == 1){
		cout << -1;
		return 0;
		}
	for(i = 0; i < q; i++){
		//cout << tv[i].first << " ";
		//cout << tv[i].second.first << " ";
		//cout << tv[i].second.second << " " << endl;
		if(ok(i)){
			//cout << i + 1;
			cout << tv[i].second.second + 1;
			return 0;
			}
		}
	cout << -1;
	return 0;
	}
