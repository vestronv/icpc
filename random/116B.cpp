#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int N = 20;
int arr[N][N];
string str[N];
vector<pair<int,int> >p;
int main(){
	int n, m, i , j, prevPigs = 0;
	cin >> n >> m;
	for(i = 0; i < n; i++){
		cin >> str[i];
		}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++){
			if(str[i-1][j-1] == 'W'){
				p.push_back(make_pair(i,j));
				arr[i][j] = 2;
			}
			else if(str[i-1][j-1] == 'P')arr[i][j] = 1, prevPigs++;
			else arr[i][j] = 0;
			}
		}
	for(i = 0; i < (int)p.size(); i++){
		int x = p[i].first;
		int y = p[i].second;
		if(arr[x-1][y] == 1){
			arr[x-1][y] = 0;
			}
		else if(arr[x][y-1] == 1){
			arr[x][y-1] = 0;
			}
		else if(arr[x+1][y] == 1){
			arr[x+1][y] = 0;
			}
		else if(arr[x][y+1] == 1){
			arr[x][y+1] = 0;
			}
		}
	int pigs = 0;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++){
			if(arr[i][j] == 1)pigs++;
			}
		}
	cout << prevPigs - pigs;
	return 0;
	}
