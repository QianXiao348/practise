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
	int n;
	cin>>n;
	map<int,int>mp;
	int cnt=0;
	while(n--){
		int x,y;
		cin>>x;
		if(x==1){
			cin>>y;
			if(!mp[y]) cnt++;
			mp[y]++;
		}
		else if(x==2){
			cin>>y;
			mp[y]--;
			if(!mp[y]) cnt--;
		}
		else{
			cout<<cnt<<endl;
		}
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


