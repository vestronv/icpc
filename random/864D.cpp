// copy From Here
#include <bits/stdc++.h>
using namespace std;
// bad times...

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const int N = 200005;
int arr[N], done[N], mark[N];
set<int>st;
int main(){
	int n, i;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> arr[i];
		mark[arr[i]]++;
		}
	int ans = 0;
	for(i = 1; i <= n; i++){
		if(!mark[i]){
			st.insert(i);
			ans++;
			}
		}
	cout << ans << endl;
	for(i = 0; i < n; i++){
		if(mark[arr[i]] == 1)continue;
		int cur = (*st.begin());
		if((int)st.size() == 0)cur = arr[i];
		if(cur < arr[i]){
			mark[arr[i]]--;
			arr[i] = cur;
			st.erase(cur);
			}
		else if(done[arr[i]]){
			mark[arr[i]]--;
			arr[i] = cur;
			st.erase(cur);
			}
		else done[arr[i]] = 1;
		}
	for(i = 0; i < n; i++)cout << arr[i] << " ";
	return 0;
	}
