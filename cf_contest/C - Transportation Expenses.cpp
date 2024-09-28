#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 2e5+10;
LL a[N];
LL n,m;
bool check(LL x){
	LL res=0;
	for(int i=0;i<n;i++) res+=min(a[i],x);
	if(res<=m) return true;
	else return false;
}
int main(){
	cin>>n>>m;
	LL maxv=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxv=max(maxv,a[i]);
	}
	LL l=1,r=2e18;
	while(l<r){
		LL mid=l+r>>1;
		if(check(mid)) l=mid+1; 
		else r=mid;
	}
	if(l-1>=maxv) cout<<"infinite\n";
	else cout<<l-1<<endl;
	return 0;
} 
