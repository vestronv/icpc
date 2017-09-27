#include <bits/stdc++.h>
using namespace std;

#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
const ll N = 200005ll;
ll a[N], b[N];
bool cmp(pair<ll, ll>p1, pair<ll, ll>p2){
	return (p1 .first <= p2.first && p1.second > p2.second);
	}
ll absl(ll x){
	if(x >= 0)return x;
	return -x;
	}
/*
20 7
1000000000 1000000000 1000000000 1000000000 1000000000 
1000000000 1000000000 1000000000 1000000000 1000000000 
1000000000 1000000000 1000000000 1000000000 1000000000 
1000000000 1000000000 1000000000 1000000000 1000000000 
*/

/*
int main(){
	boost;
	int n, i, k;
	cin >> n >> k;
	for(i = 1; i <= n; i++){
		cin >> a[i];
		b[i] = a[i] + b[i-1];
		}
	vector<pair<ll,ll> >v;
	for(i = k; i <= n; i++){
		v.push_back(make_pair(b[i] - b[i - k], i - k + 1));
		}
	sort(v.begin(), v.end(), cmp);
	vector<pair<ll,ll> > :: iterator tempo,vit = v.begin();
//	for(; vit != v.end(); vit++){
//		cout << (*vit).first << " " <<(*vit).second << endl;
//		}
	ll smv;
	int fmi = -1, smi;
	vit = v.end();
	--vit;
	smi = (*vit).second;
	smv = (*vit).first;
	--vit;
	for(; vit != v.begin(); ){
		tempo = vit;
		vit--;
		if(( absl((*tempo).second - smi) >= k) && (*tempo).first >= (*vit).first){
			fmi = (*tempo).second;
			break;
			}
		}
	if(fmi == -1){
		tempo = v.begin();
		fmi = (*tempo).second;
		}
	cout << min(smi,fmi) << " " << max(smi,fmi);
	return 0;
	}
*/

int main(){
	boost;
	ll n, i, k;
	cin >> n >> k;
	for(i = 1; i <= n; i++){
		cin >> a[i];
		b[i] = a[i] + b[i-1];
		}
	vector<pair<ll,ll> >v;
	for(i = k; i <= n; i++){
		v.push_back(make_pair(b[i] - b[i - k], i - k + 1));
		}
	sort(v.begin(), v.end(), cmp);
	vector<pair<ll,ll> > :: iterator tempo,vit = v.begin();
//	for(; vit != v.end(); vit++){
//		cout << (*vit).first << " " <<(*vit).second << endl;
//		}
	ll smv;
	ll fmi = -1, smi;
	vit = v.end();
	--vit;
	smi = (*vit).second;
	smv = (*vit).first;
	--vit;
	for(; vit != v.begin(); ){
		tempo = vit;
		vit--;
		if(( absl((*tempo).second - smi) >= k) && (*tempo).first >= (*vit).first){
			fmi = (*tempo).second;
			break;
			}
		}
	if(fmi == -1){
		tempo = v.begin();
		fmi = (*tempo).second;
		}
	cout << min(smi,fmi) << " " << max(smi,fmi);
	return 0;
	}
