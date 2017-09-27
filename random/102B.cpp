#include <iostream>
#include <string>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
int sod1(string str){
	int ans = 0, i = 0;
	while(i < (int)str.length()){
		ans += (int)(str[i] - '0');
		i++;
		}
	return ans;
	}
int sod2(int n){
	if(n < 10)return n;
	int ans = 0;
	while(n){
		ans += n % 10;
		n /= 10;
		}
	return ans;
	}
int main(){
	boost;
	string str;
	cin >> str;
	if((int)str.length() == 1){
		cout << "0";
		return 0;
		}
	int ans = 1;
	int sum = 0, prev = 0;
	for(int i = 0; i < (int)str.length(); i++){
		if(!i)sum = sod1(str);
		else sum = sod2(prev);
		if(sum < 10)break;
		prev = sum;
		ans++;
		}
	cout << ans;
	return 0;
	}
