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
	string s,s2;
	cin>>s>>s2;
	queue<char>q;
    string s3="";
	for(int i=0;i<s2.size();i++) q.push(s2[i]);
	for(int i=0;i<s.size();i++){
		if(q.size()&&s[i]=='?'){
            s3+=q.front();
			q.pop();
		}
		else if(q.size()&&s[i]==q.front()){
            s3+=q.front();
			q.pop();
		}
        else if(!q.size()&&s[i]=='?'){
            s3+="a";
        }
        else s3+=s[i];
	}
	if(q.size()) cout<<"NO"<<endl;
	else cout<<"YES\n"<<s3<<endl;
}
int main(){
	PASE;
	int _=1;
	cin>>_;
	while(_--){
		solve();
	}
	return 0;
}


