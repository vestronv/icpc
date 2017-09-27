#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define boost ios::sync_with_stdio(0);cin.tie(0);
int main(){
	boost;
	int m, s, i;
	cin >> m >> s;
	string maxi = "", mini = "";
	if(m > 1 && s == 0){
		cout << -1 << " " << -1 <<endl;
		return 0;
		}
	else if(s > m * 9){
		cout << -1 << " " << -1 <<endl;
		return 0;
		}
	else if(m == 1 && s > 9){
		cout << -1 << " " << -1 <<endl;
		return 0;
		}
	else if(m == 1 && s <10){
		cout << s << " " << s;
		return 0;
		}
	else{
		int p = 0, q = s;
		while(s){
			if(s >= 9){
				maxi += '9';
				s -= 9;
				p++;
				}
			else if(s > 0){
				maxi += '0' + s;
				s = 0;
				p++;
				}
			else{
				break;
				}
			}
		while(p != m){
			while(p < m){
				maxi += '0';
				p++;
				}
			}
		s = q;
		int howMany9 = s / 9;// 1 fixed on left and  ..9 fixed on right
		s -= howMany9 * 9;
		if(s == 0 && m == howMany9){
			i = 0;
			while(i < howMany9)mini += '9', i++;
			while(i < m)mini += '0', i++;
			}
		else if(s == 0 && m > howMany9){
			mini += '1';
			i = 0;
			while(i < m - (howMany9 + 1))mini += '0', i++;
			mini += '8';
			i = 0;
			while(i < howMany9 - 1)mini += '9', i++;
			}
		else if(m - howMany9 == 1){
			mini += s + '0';
			i = 0;
			while(i < howMany9)mini += '9', i++;
			}
		else if(m - howMany9 == 2){
			mini += '1';
			mini += (s-1) + '0';
			i = 0;
			while(i < howMany9)mini += '9', i++;
			}
		else{
			mini += '1';
			i = 0;
			while(i < m - (howMany9 + 1 + 1))mini += '0', i++;
			mini += (s-1) + '0';
			i = 0;
			while(i < howMany9)mini += '9', i++;
			}
		cout << mini << " " <<maxi;
		}
	return 0;
	}

/*
 #include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;
int main (){
	int m,s,i,k;
	cin>>m>>s;
	if(s<1&&m>1||s>m*9)
	cout<<-1<<' '<<-1<<endl;
	else {
	for(i=m-1,k=s;i>=0;i--){
	int j=max(0,k-9*i);
	if(j==0&&i==m-1&&k) j=1;
	cout<<j;
	k-=j;}
	cout<<' ';
	for(i=m-1,k=s;i>=0;i--){
	int j=min(9,k);
	cout<<j;
	k-=j;}
	}
}
*/
