#include <iostream>
#include <string>
using namespace std;

int main(){
	int nz, no, i;
	cin >> nz >> no;
	if(no > 2 * (nz + 1)){
		cout << -1;
		}
	else if(nz >= no + 2){
		cout << -1;
		}
	else if(nz == no + 1){
		int p = no + nz;
		for(i = 0; i < p; i++){
			cout << (i % 2);
			}
		}
	else if(no == 2 * (nz + 1)){
		for(i = 0; i < nz; i++){
			cout << "110";
			}
		cout << "11";
		}
	else if(nz == no){
		for(i = 0; i< no; i++){
			cout << "10";
			}
		}
	else{
		// 9 1 , 6 0
		// 7 5, 5 4, 3 3
		//if(no % 2 == 0){
		//	cout << "0";
		//	nz--;
		//	}
		while(nz && no && no != nz){
			//cout << "110";
			//nz--;
			for(i = 0; i < 2; i++){
				if(no){
					no--;
					cout<<"1";
					}
				else{
					//flag = 2 - i;
					break;
					}
				}
			cout << "0";
			nz--;
			}
		while(no || nz){
			if(no){
				cout << "1";
				no--;
				}
			if(nz){
				cout << "0";
				nz--;
				}
			}
		}
	return 0;
	}
