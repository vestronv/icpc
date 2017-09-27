#include <iostream>
#include <algorithm>
using namespace std;

int max(int a, int b){
	return a > b ? a : b;
	}

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(a == b){
		a = max(a, max(c, d));
		b = a;
		int sw = a - (a - (c *(a / c)));
		int sh = b - (b - (d *(b / d)));
		sh = (sh == 0) ? b : sh;
		sw = (sw == 0) ? a : sw;
		int ar1 = a * b;
		int ar2 = ar1 - sh * sw;
		int g = __gcd(ar1, ar2);
		cout << ar2 / g << "\\" << ar1 / g;
		}
	else{
		int maxi = max(c, d);
		if(maxi > a || maxi > b){
			a *= maxi;
			b *= maxi;
			}
		int sw = a - (a - (c *(a / c)));
		int sh = b - (b - (d *(b / d)));
		sh = (sh == 0) ? b : sh;
		sw = (sw == 0) ? a : sw;
		int ar1 = a * b;
		int ar2 = ar1 - sh * sw;
		int g = __gcd(ar1, ar2);
		cout << ar1 << ar2;
		cout << ar2 / g << "\\" << ar1 / g;
		}
	return 0;
	}
