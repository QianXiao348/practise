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
	int n,s,m;
	cin>>n>>s>>m;
	queue<int>q;
	q.push(0);
	bool flag=false;
	while(n--){
		int x1,y1;
		cin>>x1>>y1;
		int t=q.front();
		q.pop();
		if(x1-t>=s){
			flag=true;
		}
		q.push(y1);
	}
	if(m-q.front()>=s) flag=true;
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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


