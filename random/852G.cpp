// copy From Here
// GOD give me spped to solve fast...
#include <bits/stdc++.h>
using namespace std;
// bad times...
///*******************SOMETHING REALLY WRONG HERE...WHY TC#3 GAVE RTE ? MYSTERY.
//.............template...................
#define boost ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
//.............template...................

//.............data...................
const int N = 55; // 10^2
const int ANY = 98999;
int n, q, ans = 0, cur = ANY;
struct trie{
	bool isLeaf;
	int freq, prev;
	trie * alpha[5];
	trie(){
		isLeaf = false;
		freq = 0;
		prev = 0;//used to handle double countings...
		for(int i = 0; i < 5; i++)alpha[i] = NULL;
		}
	}*root;
//.............data...................

//.............functions...................
void insert(string str){
	trie * root_ = root;
	for(int i = 0; i < (int)str.length(); i++){
		if(root_->alpha[str[i]-'a'] != NULL);
		else{
			root_->alpha[str[i]-'a'] = new trie();
			}
		root_ = root_->alpha[str[i]-'a'];
		}
	root_->isLeaf = true;
	root_->freq++;
	}
void search(string str, int idx, trie * root_){
	if(!root_)return ;
	if(idx == (int)str.length()){
		if(root_->isLeaf && root_->prev != cur){
			ans += root_->freq;
			root_->prev = cur;
			return ;
			}
		}
	if(str[idx] == '?'){
		search(str, idx + 1, root_);
		for(int j = 0; j < 5; j++){	
			search(str, idx + 1, 
			root_->alpha[j]);
			}
		}
	else{
		search(str, idx + 1, root_->alpha[str[idx] - 'a']);
		}
	}
//.............functions...................

//.............main...................
int main(){
	boost;
	int i;
	cin >> n >> q;
	root = new trie();
	for(i = 0; i < n; i++){
		string str;
		cin >> str;
		insert(str);
		}
	while(q--){
		string str;
		cin >> str;
		ans = 0;
		cur++;
		search(str, 0, root);
		cout << ans << endl;
		}
	return 0;
	}

