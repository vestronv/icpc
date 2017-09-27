
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 100001;
const int MAXN = (1 << 19);

int main(){
	srand(time(NULL));
	boost;
	int n, x, i;
	cin >> n >> x;
	if(n == 1){
		cout << "YES\n";
		cout << x;
		return 0;
		}
	if(n == 2 && x == 0){
		cout << "NO";
		}
	int xor_ = MAXN;
	cout << "YES\n";
	for(i = 2; i < N - 1; i++){
		cout <<  i << " ";
		xor_ ^= i;
		}
	if(xor_ == MAXN){
		cout << MAXN << " 1 " << MAXN + 1;
		}
	cout << MAXN << " 0 " << xor_;
	return 0;
	}

