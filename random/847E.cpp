//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int>packman, food;
int main(){
	int len, i;
	string str;
	cin >> len;
	cin >> str;
	for(i = 0; i < len; i++){
		if(str[i] == 'P')packman.push_back(i);
		else if(str[i] == '*') food.push_back(i);
		}
	int lo = 0, hi = 3 * len;
	while(lo < hi){
		int mid = (lo + hi) >> 1, flag = 0;
		vector<int> :: iterator vit1, vit2;
		vit2 = food.begin();
		for(vit1 = packman.begin(); vit1 != packman.end(); vit1++){
			int from, to;
			from = to = *vit1;
			for(; vit2 != food.end(); vit2++){
				from = min(from, *vit2);
				to = max(to, *vit2);
				//cout << from << " " << to << " ";
				//cout << *vit2 << endl;
				int time__ = to - from + min(to - *vit1, *vit1 - from);
				if(time__ > mid){
					flag = 1;
					break;
					}
				}
			}
		if(vit2 != food.end())lo = mid + 1;
		else hi = mid;
		}
	cout << lo;
	return 0;
	}
