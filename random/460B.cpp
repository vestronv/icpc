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
ll sum(ll num){
	ll ret = 0ll;
	while(num){
		ret += num % 10ll;
		num /= 10ll;
		}
	return ret;
	}
ll power(ll base, ll expo){
	ll ret = 1ll;
	while(expo){
		ret *= base;
		expo--;
		}
	return ret;
	}
//.............functions...................

//.............main...................
int main(){
	ll a, b, c;
	cin >> a >> b >> c;
	vector<ll>v;
	for(ll i = 1ll; i <= 81ll; i++){
		ll temp = (b * power(i, a)) + c;
		if(temp < 1000000000 && temp > 0 && sum(temp) == i)v.push_back(temp);
		}
	sort(v.begin(), v.end());
	cout << (int)v.size() << endl;
	for(int i = 0; i < (int)v.size(); i++){
		cout << v[i] << " ";
		}
	return 0;
	}
