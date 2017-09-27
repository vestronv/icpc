#include <iostream>
#include <string>
using namespace std;
int a[3005];
int main(){
	int t, ele;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> ele;
		a[ele]=1;
		}
	for(int i = 1; i <= 3004; i++){
		if(!a[i]){
			cout << i;
			return 0;
			}
		}
	return 0;
	}
