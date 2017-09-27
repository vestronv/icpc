// copy From Here
#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 1000005; // 10^6
bool upr(char ch){
	return (ch <= 'Z' && ch >= 'A');
	}
bool lwr(char ch){
	return (ch <= 'z' && ch >= 'a');
	}
int main(){
	int len;
	string str;
	cin >> len;
	cin >> str;
	int i;
	int ans = 0, till_now = 0;
	set<char>st;
	for(i = 0; i < len; i++){
		if(upr(str[i])){
			ans = max(ans, till_now);
			st.clear();
			till_now = 0;
			}
		else{
			if(st.find(str[i]) == st.end()){
				st.insert(str[i]);
				till_now++;
				}
			}
		}
	ans = max(ans, till_now);
	cout << ans;
	return 0;
	}


