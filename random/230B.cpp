#include <iostream>
#include <set> 
using namespace std;

typedef long long ll;
const int N = 1000005;
int prime[N];
set<ll>st;
void sieve(){
	int i, j;
	for(i = 2; i < N; i++)prime[i] = 1;
	for(i = 2; i < N; i++){
		if(prime[i]){
			for(j = i + i; j < N; j += i){
				prime[j] = 0;
				}
			st.insert((ll)((ll)i * i));
			}
		}
	}
int main(){
	sieve();
	int n, i;
	ll ele;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> ele;
		if(st.find(ele) != st.end()){
			cout << "YES\n";
			}
		else cout << "NO\n";
		}
	return 0;
	}
