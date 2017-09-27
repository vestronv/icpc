#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
const int N = 100005;
vector<int>time_;
int main(){
	boost;
	int n, ele, time_got, i;
	cin >> n >> time_got;
	for(i = 0; i < n; i++){
		cin >> ele;
		time_.push_back(ele);
		time_[i] += time_[i-1];
		}
	int l = 1, r = n;
	int ans = 1;
	while(l < r){
		int time_needed1 = time_[r] - time_[l - 1];
		if(time_needed1 <= time_got){
			ans = r - l + 1;
			break;
			}
		int idx1 = upper_bound(time_.begin(), time_.end(), (time_got - time_[l-1]));
		int idx2 = lower_bound(arr + 1, arr + n + 1, (time_got));
		if(arr[idx1] - arr[l - 1] > time_got && arr[r] - arr[idx2 - 1] > time_got)l-,r--;
		}
	cout << ans;
	return 0;
	}
