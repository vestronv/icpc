#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main(){
	string str;
	cin >> str;
	int i, len = (int)str.length();
	string ans = "";
	set<char>cons, vowels;
	map<char, int>freq;
	vowels.insert('a');
	vowels.insert('e');
	vowels.insert('i');
	vowels.insert('o');
	vowels.insert('u');
	if(len < 3){
		cout << str;
		return 0;
		}
	if(len == 3){
		for(i = 0; i < 3; i++){
			if(vowels.find(str[i]) == vowels.end()){
				cons.insert(str[i]);
				}
			}
		if(cons.size() >= 2){
			cout << str.substr(0,2) << " " << str[2];
			}
		else cout << str;
		return 0;
		}
	char fi, se;
	fi = str[1];
	se = str[0];
	ans += se;
	ans += fi;
	for(i = 2; i < len; i++){
		if(vowels.find(str[i]) == vowels.end()){
			if(vowels.find(fi) != vowels.end()){
				ans += str[i];
				se = '#';
				fi = str[i];
				}
			else{
				if(vowels.find(se) != vowels.end()){
					ans += str[i];
					se = fi;
					fi = str[i];
					}
				else{
					if(str[i] == fi && str[i] == se){
						ans += str[i];
						se = fi;
						fi = str[i];
						}
					else if(se == '#'){
						ans += str[i];
						se = fi;
						fi = str[i];
						}
					else{
						ans += ' ';
						ans += str[i];
						se = '#';
						fi = str[i];
						}
					}
				}
			}
		else{
			ans += str[i];
			se = '#';
			fi = str[i];
			}
		}
	cout << ans;
	/*
	for(i = 0; i < (int)str.length(); i++){
		char now = str[i];
		if(vowels.find(now) != vowels.end()){
			// it is vowel
			ans += now;
			cons.clear();
			}
		else{
			
			if((int)cons.size() > 1){
				ans += ' ';
				ans += now;
				cons.clear();
				cons.insert(now);
				freq.clear();
				}
			else{
				freq[now]++;
				cons.insert(now);
				if(cons.size() > 2 && freq.size() > 1){
					ans += ' ';
					freq.clear();
					cons.clear();
					cons.insert(now);
					freq[now]++;
					}
				ans += now;
				}
			
			}
		}
	cout << ans;
	*/
	return 0;
	}
