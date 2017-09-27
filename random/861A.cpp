#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
ll lcm(ll a, ll b){
	ll g = __gcd(a, b);
	return g * ( a / g) * ( b / g);
	}
int main(){
	boost;
	ll n, i = 1;
	int k, p;
	cin >> n >> k;
	p = k;
	while(p--){
		i *= 10;
		}//now we have max number with `k` zeroes
	cout << lcm(i, n);
	return 0;
	}
