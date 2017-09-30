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
const int N = 105; // 10^6
int arr[N], mark[2 * N * N * N];
//.............data...................

//.............functions...................
//.............functions...................

//.............main...................
int main(){
	int t;
	cin >> t;
	while(t--){
		memset(mark, 0, sizeof mark);
		int n, i;
		vector<int>v;
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> arr[i];
			}
		for(int j = 1; j < 2 * N * N * N; j++){
			if((int)v.size() > n + 2)break;
			int flag = 0;
			for(i = 0; i < n; i++){
				if(mark[j] || mark[arr[i] + j]){
					flag = 1;
					break;
					}
				}
			if(!flag){
				v.push_back(j);
				for(i = 0; i < n; i++){
					mark[arr[i] + j] = 1;
					}
				}
				mark[j] = 1;
			}
		/*
		for(i = 1; i < (2 * N * N * N); i++){
			if(!mark[i]){
				v.push_back(i);
				}
			}
		*/
		if((int)v.size() >= n){
			cout << "YES\n";
			for(i = 0; i < n; i++){
				cout << v[i] << " ";
				}
			cout << endl;
			}
		else{
			cout << "NO\n";
			}
		}
	return 0;
	}

