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
int a[N];
LL sum[N];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	string s;
	cin>>s;	
	s=' '+s;
	int i=1,j=n;
	LL res=0;
	while(i<j){
		while(i<j&&s[i]=='R') i++;
		while(i<j&&s[j]=='L') j--;
		if(i<j) res+=sum[j]-sum[i-1];
		i++,j--;
	}
	cout<<res<<endl;
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


