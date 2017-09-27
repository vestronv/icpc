#include <bits/stdc++.h>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
int main(){
	//boost;
	int w, h, q;
	char ch[3];
	int i, l, r, slice;
	ll ans;
	//cin >> w >> h >> q;
	scanf("%d%d%d", &w, &h, &q);
	set<int>cuts[2];// idx pos where there is a cut, V/H
	multiset<int>rect[2];
	cuts[0].insert(0);
	cuts[0].insert(w);
	cuts[1].insert(0);
	cuts[1].insert(h);
	rect[0].insert(w);
	rect[1].insert(h);
	set<int> :: iterator sit;
	while(q--){
		//cin >> ch;
		scanf("%s", ch);
		i = (int)(ch[0] == 'H');
		//cin >> slice;
		scanf("%d", &slice);
		sit = cuts[i].lower_bound(slice);
		r = *sit;
		--sit;
		l = *sit;
		rect[i].erase(rect[i].find(r - l));
		rect[i].insert(r - slice);
		rect[i].insert(slice - l);
		cuts[i].insert(slice);
		ans = *rect[0].rbegin();
		ans *= (*rect[1].rbegin());
		//cout << ans << endl;
		printf("%I64d\n", ans);
	    }
	return 0;
	}
