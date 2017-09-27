#include <bits/stdc++.h>
using namespace std;

#define boost ios::sync_with_stdio(0);
const int N = 1000005;
const int MAX = 1000005;
const int NN = 100005;
int n;
int arr[NN], dp[NN], prime[N], pos[N], done[N], factorr[MAX];
vector<int>primes;
//map<int, vector<int> >factors;
map<int, vector<int> >factors;

void calculate(){
	for(int i=1;i<=MAX;i++){
		if(i&1)
			factorr[i]=i;
		else
			factorr[i]=2;
		}
	for(int i=3;i*i<=MAX;i+=2){
		if(factorr[i]==i){
			for(int j=i*i;j<=MAX;j+=i){
				if(factorr[j]==j)
					factorr[j]=i;
				}
			}
		}
	}

void sieve(){
	int i, j;
	prime[0] = prime[1] = 0;
	for(i = 2; i < N; i++)prime[i] = 1;
	for(i = 2; i < N; i++){
		if(prime[i]){
			primes.push_back(i);
			for(j = i + i; (j) <= N; j += i){
				prime[j] = 0;
				factors[j].push_back(i);
				}
			}
		}
	}
//vector<int>factorise(int ele){
vector<int>factorise(int ele){
	//return factors[ele];
	//int i = 0;
	vector<int>ans;
	//while(ele > 1){
	//	int flag = 0;
	//	while(ele > 1 && ele % factorr[ele] == 0){
	//		if(!flag)ans.push_back(primes[i]);
	//		flag = 1;
	//		ele /= factorr[ele];
	//		}
	//	i++;
	//	}
	//return ans;
	ans.push_back(factorr[ele]);
	ele /= factorr[ele];
	while(ele > 1){
		int p = ans.size();
		if(p >= 1 && ans[p-1]!=factorr[ele])ans.push_back(factorr[ele]);
		ele /= factorr[ele];
		}
	return ans;
	}
int copi(int idx){
	//vector<int>fac;
	vector<int>fac;
	//if(!done[arr[idx]])
	fac = factorise(arr[idx]);
	//if(!done[arr[idx]]){
	//	factors[arr[idx]] = fac;
	//	done[arr[idx]] = 1;
	//	}
	//else{
		//fac = factors[arr[idx]];
	//	}
	int ret = 0;
	vector<int> :: iterator mit = fac.begin();
	for(; mit != fac.end(); mit++){
		ret = max(ret, pos[*mit]);
		}
	mit = fac.begin();
	for(; mit != fac.end(); mit++){
		pos[*mit] = idx;
		}
	return ret;
	}
int main(){
	//boost;
	calculate();
	//for(int i = 2; i < 100; i++){
	//	cout << factorr[i] << " ";
	//	}
	//return 0;
	//sieve();
	dp[1] = 1;
	//vector<int>pp = factorise(1);
	//for(vector<int>::iterator ii=pp.begin(); ii!=pp.end(); ii++){
	//	cout << (*ii) << " ";
	//	}
	//return 0;
	int t;
	//cin >> t;
	scanf("%d", &t);
	while(t--){
		int i;
		for(i = 0; i < MAX; i++)pos[i] = 0;
		//cin >> n;
		scanf("%d", &n);
		for(i = 1; i <= n; i++){
			//cin >> arr[i];
			scanf("%d", &arr[i]);
			dp[i+1] = 0;
			}
		copi(1);
		int ans = 1;
		for(i = 2; i <= n; i++){
			dp[i] = min(dp[i-1] + 1, i - copi(i));
			ans = max(ans, dp[i]);
			}
		if(ans == 1)ans = -1;
		//cout << ans << endl;
		printf("%d\n", ans);
		}
	return 0;
	}
