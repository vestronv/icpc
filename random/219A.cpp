#include <iostream>
#include <string>
using namespace std;

int freq[26];
int main(){
	int k, i;
	string str;
	cin >> k;
	cin >> str;
	for(i = 0; i < (int)str.length(); i++){
		freq[(int)(str[i] - 'a')]++;
		}
	int flag = 0;
	for(i = 0; i < 26; i++){
		if(freq[i] % k != 0){
			flag = 1;
			break;
			}
		}
	if(flag)cout << -1;
	else{
		string temp = "";
		for(i = 0; i < 26; i++){
			if(freq[i]){
				int times = freq[i] / k;
				while(times--)temp += (i + 'a');
				}
			}
		while(k--)cout << temp;
		}
	return 0;
	}
