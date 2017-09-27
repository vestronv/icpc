#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
const int N = 100005;
const int NN = 505;
int sieve[N];
vector<int>primes;
int mat[NN][NN];
int min(int a, int b){
	return a < b ? a : b;
	}
void Sieve(){
	int i, j;
	for(i = 0; i < N; i++){
		sieve[i] = 1;
		}
	sieve[1] = 0;
	sieve[0] = 0;
	for(i = 2; i < N; i++){
		if(sieve[i]){
			primes.push_back(i);
			for(j = i + i; j < N; j += i){
				sieve[j] = 0;
				}
			}
		}
	}
int main(){
	boost;
	Sieve();
	int n, m, i, j;
	cin >> n >> m;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++){
			cin >> mat[i][j];
			}
		}
	vector<int> :: iterator vit;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++){
			vit = lower_bound(primes.begin(), primes.end(), mat[i][j]);
			mat[i][j] = (*vit) - mat[i][j];
			}
		}
	//int ans_cache[n + m + 1];
	int ans = INT_MAX;
	//int k = 1;
	for(i = 1; i<= n; i++){
		int temp = 0;
		for(j = 1; j <= m; j++){
			temp += mat[i][j];
			}
		//ans_cache[k++] = temp;
		ans = min(ans, temp);
		}
	for(i = 1; i<= m; i++){
		int temp = 0;
		for(j = 1; j <= n; j++){
			temp += mat[j][i];
			}
		//ans_cache[k++] = temp;
		ans = min(ans, temp);
		}
	cout << ans;
	return 0;
	}
