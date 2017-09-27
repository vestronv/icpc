#include <bits/stdc++.h>
#include <set>
#include <map>
#include <string>
using namespace std;

//#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 70007;
string str[N];
//string ans[N];
unordered_map<string, int>mp;
//oo.ooo
void allSub(string strr, int id){
	//int i;
	for(int len = 1; len <= 9; len ++){
		//cout << endl << len << endl;
		for(int start_pos = 1; start_pos <= 9; start_pos++){
			if(start_pos + len - 1 > 9)continue;
			string temp = "";
			for(int kahatak = 1; kahatak <= len; kahatak++){
				
				temp += strr[start_pos + kahatak - 1 - 1];
			}
			//cout << temp << " ";
			if(!mp[temp]){
				mp[temp] = id;
			}
			else if(mp[temp] == id){
				// it's cool
			}
			else{
				mp[temp] = -1;// waste 
			}
			
			
			}//start wala
		}//len wala
	}

int main(){
	//boost;
	int i = 1, q, id = 1;
	//cin >> q;
	scanf("%d", &q);
	for(; i <= q; i++){
		char now[10];
		//cin >> str[i];
		scanf("%s",now);
		str[i] = string(now);
		++id;
		}
	for(i = 1; i <= q; i++){
		allSub(str[i], i);
		}
	unordered_map<string, int> :: iterator mit = mp.begin();
	//for(i = 1; i <= q; i++)ans[i] = str[i];
	for(; mit != mp.end(); mit++){
		if((*mit).second == -1)continue;
		str[(*mit).second] = (int)(*mit).first.size() < (int)str[(*mit).second].length() ? 
									(*mit).first : str[(*mit).second];
	}
	//for(i = 1; i <= q; i++)cout << str[i] << endl;
	for(i = 1; i <= q; i++)printf("%s\n",str[i].c_str());
	return 0;
	}
