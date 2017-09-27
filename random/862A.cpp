#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 105;
int arr[N];
int main(){
	boost;
	int n, x;
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		int ele;
		cin >> ele;
		arr[ele] = 1;
		}
	int cost = 0;
	for(int i = 0; i < x; i++){
		if(!arr[i])cost++;
		}
	if(arr[x])cost++;
	cout << cost;
	return 0;
	}
