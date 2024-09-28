#include<bits/stdc++.h>
using namespace std;
#define PASE cin.tie(0),ios::sync_with_stdio(false);
#define fi first
#define se second
typedef long long LL;
typedef pair<int,int>PII;
const int dx[]={-1,0,1,0,-1,1,1,-1};
const int dy[]={0,1,0,-1,1,1,-1,-1};
const int MOD = 1e9+7;
const int N = 1e5+10;
void solve(){
	string s;
	cin>>s;
	vector<char>a;
	bool flag=false;
	for(int i=0;i<s.size();i++){
		if(s[i]=='.'){
			flag=true;
		}
		if(!flag) cout<<s[i];
		else if(s[i]!='.'){
			a.push_back(s[i]);
		}
		if(a.size()==3) break;
	}
	while(a.size()&&a.back()=='0') a.pop_back();
	if(a.size()==0) return ;
	cout<<".";
	for(auto x:a){
		cout<<x;
	}
}
int main(){
	PASE;
	int _=1;
//	cin>>_;
	while(_--){
		solve();
	}
	return 0;
}


