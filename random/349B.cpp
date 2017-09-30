// copy From Here
// GOD give me spped to solve fast...
#include <bits/stdc++.h>
using namespace std;
// bad times...

//.............template...................
#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
//.............template...................

//.............data...................
const int N = 1000005; // 10^6
int tot, letter[10];
//.............data...................

//.............functions...................

//.............functions...................

//.............main...................
int main(){
	int i, mini = INT_MAX;
	cin >> tot;
	for(i = 1; i < 10; i++){
		cin >>letter[i];
		mini = min(mini, letter[i]);
		}
	int digits = tot / mini;
	if(mini > tot){
		cout << -1;
		return 0;
		}
	for(i = 1; i <= digits; i++){
		for(int j= 9; j >= 1; j--){
			if(tot - letter[j] >= mini * (digits - i)){
				cout << j;
				tot -= letter[j];
				break;
				}
			}
		}
	return 0;
	}

