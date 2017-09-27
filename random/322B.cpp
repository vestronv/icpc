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
//.............data...................

//.............functions...................

//.............functions...................

//.............main...................
int main(){
	ll r, g, b;
	cin >> r >> g >> b;
	ll temp = r/3 + g/3 + b/3;
	ll p = min(r, min(g, b));
	temp = max(temp, p + (r-p)/3 + (g-p)/3 + (b-p)/3);
	temp = max(temp, min(r,min(g,b)));
	temp = max(temp, 1 + (r-1)/3 + (g-1)/3 + (b-2)/3);
	temp = max(temp, 2 + (g-2)/3 + (b-2)/3 + (r-2)/3);
	//temp = max(temp, 1 + (b-)/3 + (r-1)/3 + g/3);
	if(r == 0 && g == 0 && b == 0)temp = 0;
	if(r == 0 && g == 0)temp = b/3;
	if(g == 0 && b == 0)temp = r/3;
	if(r == 0 && b == 0)temp = g/3;
	if(r == 0)temp = (g/3 + b/3);
	if(g == 0)temp = (r/3 + b/3);
	if(b == 0)temp = (g/3 + r/3);
	cout << temp;
	return 0;
	}

