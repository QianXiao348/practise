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
const int N = 110;
string s[N];
char c[N][N];
void solve(){
	int n;
	cin>>n;
	int max_v=0;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		max_v=max(max_v,(int)s[i].size());
	}
	int x=0,y=0,j,k;
	for(j=0,x=0;j<max_v;j++,x++){
		for(k=n,y=0;k;k--,y++){
			if(j<s[k].size()&&s[k][j]) c[x][y]=s[k][j];
			else c[x][y]='*';
		}
	}
	for(int j=0;j<x;j++)
		for(int i=y-1;i>=0;i--){
			if(c[j][i]=='*') c[j][i]=' ';
			else break;
		}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(c[i][j]==' ') continue;
			else cout<<c[i][j];
		}
		cout<<endl;
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


