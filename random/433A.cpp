#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n, i;
	int sum = 0, ele, ns = 0, nl = 0;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> ele;
		if(ele == 100)ns++;
		else nl++;
		sum += (ele / 100);
		}
	if(n == 1){
		cout << "NO";
		return 0;
		}
	if(sum % 2 == 0 && (!nl || !ns)){
		if(!ns){
		if(nl % 2 == 0){
			cout << "YES";
			}
		else cout << "NO";
		return 0;
		}
		if(!nl){
		if(ns % 2 == 0){
			cout << "YES";
			}
		else cout << "NO";
		return 0;
		}
		}
	if(sum % 2 == 0 && !(ns == 0 && nl % 2 == 1))cout << "YES";
	else cout<< "NO";
	return 0;
	}
