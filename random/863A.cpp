#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 1000005; // 10^6
bool palin(string temp){
	int len = (int)temp.length();
	int i = 0, j = len - i -1;
	for(; i <= j; i++, j--){
		if(temp[i] != temp[j])return false;
		}
	return true;
	}
int main(){
	int i, len;
	string str, temp = "";
	cin >> str;
	len = (int)str.length();
	for(i = len - 1; i >= 0; i--){
		if(str[i] != '0')break;
		}
	if(i >= 0){
		while(i >=0){
			temp += str[i];
			i--;
			}
		if(palin(temp)){
			cout << "YES";
			}
		else{
			cout << "NO";
			}
		}
	else{
		cout << "YES";
		}
	return 0;
	}

