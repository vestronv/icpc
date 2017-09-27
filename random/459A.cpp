#include <iostream>
#include <string>
using namespace std;

int main(){
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1 == x2 && y1 == y2 && x1 == y1){
		cout << -1;
		}
	else if((x2 - x1) == 0 || (y2 - y1) == 0){
		if(y2 == y1)
		cout << x1 << " " << y1 + abs(x2 - x1) 
		<< " " << x2 << " " << y2 + abs(x2 - x1);
		else
		cout << x1 + abs(y2 - y1) << " " << y1 
		<< " " << x2 + abs(y2 - y1) << " " << y2;
		}
	else if(abs(x2 - x1) == abs(y2 - y1)){// opposite
		cout << x1 << " " << y2 << " " << x2 << " " << y1;
		}
	else{
		cout << -1;
		}
	return 0;
	}

