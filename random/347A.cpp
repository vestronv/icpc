#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1005;
int arr[N];
int main(){
	int n, i;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> arr[i];
		}
	sort(arr, arr+n);
	swap(arr[0], arr[n-1]);
	for(i = 0; i < n; i++){
		cout << arr[i] << " ";
		}
	return 0;
	}
