#include <iostream>
#include <math.h>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
int main(){
	boost;
	ll n, i, p;
	cin >> n;
	p = (ll)sqrt(n);
	if(p * p == n){
		cout << p * 4;
		}
	else{
		i = n - (p * p);
		if(i <= p){
			cout << p * 4 + 2;
			}
		else{
			cout << p * 4 + 4;
			}
		}
	return 0;
	}
