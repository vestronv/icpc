#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;

#define pb push_back
typedef long long ll;
vector<ll>vec;
void pre(){
	vec.pb(4);
	vec.pb(7);
	queue<ll>q;
	q.push(4);
	q.push(7);
	while(1){
		ll cur = q.front(); q.pop();
		if(cur > 99999999999ll)break;
		ll a = cur * 10 + 4;
		ll b = cur * 10 + 7;
		vec.pb(a);
		vec.pb(b);
		q.push(a);
		q.push(b);
		}
	}
int main(){
	pre();
	ll l, r;
	cin >> l >> r;
	int curPos = 0;
	ll ans = 0ll;
	int flag = 0;
	//cout << vec[4007] << endl;
	while(l > vec[curPos]){
		flag = 1;
		curPos++;
		}
	if(flag){
		if(vec[curPos-1] >= l)curPos -= 1;
		}
	//cout << curPos << " " << vec[curPos] << endl;
	while(l <= r){
		ll nextLucky = vec[curPos];
		ll range = min((ll)(r - l + 1), (ll)abs(nextLucky - l + 1));
		ans += range * vec[curPos];
		//cout << l << " " << range << " " << vec[curPos] << endl;
		l = vec[curPos] + 1;
		curPos += 1;
		}
	cout << ans;
	return 0;
	}
