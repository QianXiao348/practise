#include<bits/stdc++.h>
using namespace std;
#define PASE cin.tie(0),ios::sync_with_stdio(false);
#define fi first
#define se second
typedef long long LL;
typedef pair<int,int>PII;
const int dx[]= {-1,0,1,0,-1,1,1,-1};
const int dy[]= {0,1,0,-1,1,1,-1,-1};
const int MOD = 1e9+7;
const int N = 2e5+10;
void solve()
{
	int n;
	cin>>n;
	bool flag=true;
	map<int,int>mp;
	for(int i=0; i<n; i++)
	{
		int t;
		cin>>t;
		if(!i)
		{
			mp[t-1]++;
			mp[t]++;
			mp[t+1]++;
		}
		else
		{
			if(mp[t]==0) flag=false;
			mp[t-1]++;
			mp[t]=2;
			mp[t+1]++;
		}
	}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
}
int main()
{
	PASE;
	int _=1;
	cin>>_;
	while(_--)
	{
		solve();
	}
	return 0;
}


