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
const int N = 2e5+10;
int sum[N]; 
int f(int x){
    int res=0;
    while(1){
        x/=3;
        res++;
        if(x==0) return res;
    }
}
void solve(){
	int l,r;
	cin>>l>>r;
	cout<<sum[r]-sum[l-1]+f(l)<<endl;
}
int main(){
	PASE;
	for(int i=1;i<=N;i++)
		sum[i]=f(i);
    for(int i=1;i<=N;i++)
        sum[i]=sum[i-1]+sum[i];
	int _=1;
	cin>>_;
	while(_--){
		solve();
	}
	return 0;
}


