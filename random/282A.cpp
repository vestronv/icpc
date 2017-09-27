#include <iostream>
#include <string>
using namespace std;

int main(){
	int t, ans = 0;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s[1] == '+')ans++;
		else ans--;
		}
	cout << ans;
	return 0;
	}
