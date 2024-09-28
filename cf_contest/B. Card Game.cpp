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
	int a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	int ans=0;
	vector<PII>sun={{a1, a2}, {a1, a2}, {a2, a1}, {a2, a1}};
	vector<PII>slv={{b1, b2}, {b2, b1}, {b1, b2}, {b2, b1}};
	for(int i=0;i<4;i++){
		int win_a=0,win_b=0;
		if(sun[i].fi>slv[i].fi) win_a++;
		else if(sun[i].fi<slv[i].fi) win_b++;
		if(sun[i].se>slv[i].se) win_a++;
		else if(sun[i].se<slv[i].se) win_b++;
		if(win_a>win_b) ans++;
	}
	cout<<ans<<endl;
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


