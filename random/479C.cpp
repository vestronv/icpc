#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
const int N = 5005;
vector<pair<int,int> >arr;
int min(int a, int b){
	return a < b ? a : b;
	}
int main(){
	boost;
	int n, i, a, b;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> b >> a;
		arr.push_back(make_pair(b, a));
		}
	sort(arr.begin(), arr.end());
	int ans = arr[0].second;
	for(i = 1; i < n; i++){
		//ans = max(ans, min(arr[i].first, arr[i].second));
		if(arr[i].second >= ans)ans = arr[i].second;
		else ans = arr[i].first;
		}
	cout << ans;
	return 0;
	}
