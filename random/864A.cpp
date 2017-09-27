// copy From Here
#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 1000005; // 10^6

int main(){
	int n;
	cin >> n;
	map<int, int>mp;
	for(int i = 0; i < n; i++){
		int ele;
		cin >> ele;
		mp[ele]++;
		}
	if((int)(mp.size()) == 2){
		map<int, int>::iterator mit = mp.begin();
		int a = (*mit).second;
		int aa = (*mit).first;
		++mit;
		int b = (*mit).second;
		int bb = (*mit).first;
		if(a == b){
			cout << "YES\n";
			cout << aa << " " << bb;
			}
		else{
			cout << "NO";
			}
		}
	else{
		cout << "NO";
		}
	return 0;
	}

