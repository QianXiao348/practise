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
	int a,b,c;
	bool flag=false;
	cin>>a>>b>>c;
	while(b!=c){
		b++;
	 	if(b==24) b==0; 
	 	if(b==a) flag=true;
	 }
	if(flag) puts("No");
	else puts("Yes");
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


