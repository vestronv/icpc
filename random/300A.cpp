#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, i, ele;
	cin >> n;
	vector<int>neg, pos, zer;
	for(i = 0; i < n; i++){
		cin >> ele;
		if(ele < 0)neg.push_back(ele);
		else if(ele > 0)pos.push_back(ele);
		else zer.push_back(ele);
		}
	int p = 0;
	if((int)pos.size() == 0){
		pos.push_back(neg[0]);
		pos.push_back(neg[1]);
		p = -2;
		}
	if((int)neg.size() % 2 ==0){
		if(p == 0)zer.push_back(neg[0]);
		else zer.push_back(neg[2]);
		p--;
		}
	cout << neg.size() + p;
	for(i = -p; i < (int)neg.size(); i++){
		cout << " " << neg[i];
		}
	cout << endl << pos.size();
	for(i = 0; i < (int)pos.size(); i++){
		cout << " " << pos[i];
		}
	cout << endl << zer.size();
	for(i = 0; 
				i < (int)zer.size(); i++){
		cout << " " << zer[i];
		}
	return 0;
	}
