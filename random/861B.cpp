#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;
// going through real bad times...
#define boost ios::sync_with_stdio(0);cin.tie(0);
map<int, int>mp;
int max(int a, int b){
	return a > b ? a : b;
	}
int main(){
	boost;
	int tofind, q, i;
	cin >> tofind >> q;
	vector<int>ans;
	int upto = tofind;
	while(q--){
		int flat, floor;
		cin >> flat >> floor;
		mp[flat] = floor;
		upto = max(upto, flat);
		}
	for(i = 1; i <= upto; i++){
		int cur_flats_in_floor = i, error = 0;
		map<int, int> :: iterator mit;
		mit = mp.begin();
		for(; mit != mp.end(); mit++){
			int should_be = (*mit).first / cur_flats_in_floor + 
				(((*mit).first % cur_flats_in_floor) ? 1 : 0);
			//cout << should_be << " ";
			if(should_be != (*mit).second)error++;
			}
		if(!error){
			//cout << cur_flats_in_floor << endl;
			ans.push_back(cur_flats_in_floor);
			}
		//cout << endl;
		}
	if((int)ans.size() == 1)cout << tofind / ans[0] + ((tofind % ans[0]) ? 1 : 0);
	else if((int)ans.size() > 1){
		int multipl_ans = 0;
		int should_be = tofind / ans[0] + ((tofind % ans[0]) ? 1 : 0);
		for(i = 1; i < (int)ans.size(); i++){
			if(((tofind / ans[i]) + ((tofind % ans[i]) ? 1 : 0)) != should_be)multipl_ans++;
			}
		if(!multipl_ans)cout << tofind / ans[0] + ((tofind % ans[0]) ? 1 : 0);
		else cout << -1;
		}
	else cout << -1;
	return 0;
	}
