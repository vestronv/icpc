// copy From Here
// GOD give me spped to solve fast...
#include <bits/stdc++.h>
using namespace std;
// bad times...

//.............template...................
#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
//.............template...................

//.............data...................
const int N = 1005; // 10^3
pair<int, int>points[N];
//.............data...................

//.............functions...................

//.............functions...................

//.............main...................
int main(){
	int n, i, ele, prev;
	cin >> n;
	cin >> ele;
	prev = ele;
	for(i = 1; i < n; i++){
		cin >> ele;
		points[i-1].first = prev;
		points[i-1].second = ele;
		prev = ele;
	}
	if(n < 4){
		cout << "no";
		return 0;
		}
	//sort(points, points + n);
	int flag = 0;
	for(i = 0; i < n - 1; i++){
		int a = points[i].first;
		int b = points[i].second;
		points[i].first = min(a, b);
		points[i].second = max(a, b);
		//cout << points[i].first << " " << points[i].second << endl;;
		}
	for(i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n - 1; j++){
				//if(i == j)continue;
				if(points[i].second > points[j].first && points[i].second < points[j].second)flag = 1;
				if(points[i].first > points[j].first && points[i].first < points[j].second)flag = 1;
				if(points[i].second == points[j].second && points[i].first < points[j].second && points[i].first > points[j].first)flag = 0;
				if(points[i].first == points[j].first && points[i].second < points[j].second && points[i].second > points[j].first)flag = 0;
				if(points[i].first < points[j].second && 
				points[i].first > points[j].first && 
				points[i].second < points[j].second && 
				points[i].first > points[j].first )flag = 0;
				if(flag){
					//cout << i << " " << j << endl;
					break;
					}
				}
			if(flag)break;
		}
	if(!flag)cout << "no";
	else cout << "yes";
	return 0;
	}
