#include <iostream>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
const int N = 55;
int dp[2][N];
int maza[N], n;
int min(int a, int b){
	return a < b ? a : b;
	}
int max(int a, int b){
	return a > b ? a : b;
	}
int solve(int idx, int tokBob){
	if(idx >= n){
		return 0;
		}
	if(dp[tokBob][idx] != -1)return dp[tokBob][idx];
	if(tokBob){
		return dp[tokBob][idx] = max(solve(idx + 1, tokBob), 
			maza[idx] + solve(idx + 1, 1 - tokBob));
		}
	return dp[tokBob][idx] = min(maza[idx] + solve(idx + 1, tokBob), 
		solve(idx + 1, 1 - tokBob));
	}
int main(){
	boost;
	int i, puraKhaKMaze = 0;
	for(i = 0; i < N; i++)dp[0][i] = dp[1][i] = -1;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> maza[i];
		puraKhaKMaze += maza[i];
		}
	int bobKaMaza = solve(0,1);
	cout << puraKhaKMaze - bobKaMaza << " " <<bobKaMaza;
	return 0;
	}
