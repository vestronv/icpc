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
const int N = 105; // 10^2
int n, L[N], R[N];
//.............data...................

//.............functions...................

//.............functions...................

//.............main...................
int main(){
	int i;
	cin >> n;
	stack<int>stk;
	for(i = 1; i <= n; i++){
		scanf("%d%d", &L[i], &R[i]);
		if(!L[i])stk.push(i);
		}
	if(!stk.empty()){
		int f = stk.top();
		stk.pop();
		while(!stk.empty()){
			while(R[f])f = R[f];
			R[f] = stk.top();
			L[stk.top()] = f;
			f = stk.top();
			stk.pop();
			}
		}
	for(i = 1; i <= n; i++){
		cout << L[i] << " " << R[i] << endl;
		}
	return 0;
	}

