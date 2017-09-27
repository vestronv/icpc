#include <iostream>
#include <string>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
const int N = 100005;
bool allzero(string a){
	for(int i = 0; i < (int)a.length(); i++){
		if(a[i] != '0')return false;
		}
	return true;
	}
int main(){
	boost;
	string a, b;
	int i, lena, lenb;
	cin >> a >> b;
	lena = (int)a.length();
	lenb = (int)b.length();
	if(lena != lenb){
		cout << "NO";
		return 0;
		}
	if(allzero(a)){// oops.. special case
		if(a != b){
			cout << "NO";
			}
		else cout << "YES";
		return 0;
		}
	if(allzero(b)){// oops.. special case
		if(a != b){
			cout << "NO";
			}
		else cout << "YES";
		return 0;
		}
	int flag = 1;
	int nz1 = 0, nz2 = 0, no1 = 0, no2 = 0;
	for(i = 0; i < lena; i++){
		if(a[i] == '0')nz1++;
		else if(a[i] == '1')no1++;
		if(b[i] == '0')nz2++;
		else if(b[i] == '1')no2++;
		}
	int temp = abs(no1 - no2);
	if(temp < no1 || temp < nz1)flag = 0;
	if(flag)cout << "NO";
	else cout << "YES";
	return 0;
	}
