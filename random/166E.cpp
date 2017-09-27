//Awesome logic...
#include <iostream>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
const int mod = 1000000007;
int main(){
	int n, i;
	cin >> n;
	long long dp = 1, abcp = 0, dn, abcn;
	//long long ans = 0;
	for(i = 1; i<= n; i++){
		abcn = (dp + 2 * abcp) % mod;
		dn = (3 * abcp) % mod;
		dp = dn;
		abcp = abcn;
		}
	cout << dn;
	return 0;
	}
