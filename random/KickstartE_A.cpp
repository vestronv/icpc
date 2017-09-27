#include <bits/stdc++.h>
#include <string>
using namespace std;
ifstream fin("Test.txt");
ofstream fout("TestO.txt");

#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int a,b,c;

bool chk(){
	return (b!=a) && ((b-a)<(c+c));
}

int main(){
    //fast;

    int t;
    fin>>t;

    int n;
    int x[5002];

    long long ans;

    for(int tt=1;tt<=t;tt++){

    	fin>>n;

    	for(int i=0;i<n;i++) fin>>x[i];

    	//sort(x,x+n);
    	ans=0;
//fout <<"hi";
    	for(int i=0;i<n;i++){
    		for(int j=i+1;j<n;j++){
    			for(int k=j+1;k<n;k++){
    				for(int l=k+1;l<n;l++){
						int xx[4];
						xx[0] = x[i];
						xx[1] = x[j];
						xx[2] = x[k];
						xx[3] = x[l];
						sort(xx,xx  + 4);
    					if(xx[0]==xx[1]) c=xx[0],a=xx[2],b=xx[3],ans+=chk();

    					else if(xx[1]==xx[2]) c=xx[1],a=xx[0],b=xx[3],ans+=chk();

    					else if(xx[2]==xx[3]) c=xx[2],a=xx[0],b=xx[1],ans+=chk();;

    				}
    			}
    		}
    	}
    	fout<<"Case #"<<tt<<": "<<ans<<endl;
    }
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int dp[105];
map<int, set<string> >hash;
set<vector<string> >clips;
void init(string str){
	int i, clen, len = (int)str.length();
	for(i = 0; i < len; i++){
		for(clen = 1; clen <= len - i; clen++){
			//cout << str.substr(i, clen) << " " << i + clen << endl;
			hash[i + clen].insert(str.substr(i, clen));
			}
		}
	}
int solve(string str, int idx){
	int i, j, n = (int)str.length();
	int ans = 0;
	for(i = idx; i < n; i++){
		ans = i + 1;
		for(j = 0; j < i; j++){
			
			}
		ans = min(ans, dp[i - 1] + 1);
		dp[i] = ans;
		cout << "Cur ans = " << ans << " " << endl;
		}
	return dp[n - 1];
	}
int main(){
	int t, tc = 1;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		init(str);
		//for(int i = 1; i <= (int)str.length(); i++){
		//	cout << "For i = " << i << endl;
		//	for(set<string> :: iterator sit = hash[i].begin(); 
		//		sit != hash[i].end(); sit++){
		//			cout << *sit << " ";
		//			}
		//	cout << endl;
		//	}
		dp[0] = 1;
		int ans = 0;
		ans = solve(str, 1);
		cout << "Case #" << tc++ << ": " << ans << endl;
		}
	return 0;
	}
*/
