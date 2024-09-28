#include <bits/stdc++.h> 
using namespace std;
#define PASE cin.tie(0), ios::sync_with_stdio(false);
#define fi first
#define se second
typedef long long LL;
typedef pair<int, int> PII;
const int dx[] = {-1, 0, 1, 0, -1, 1, 1, -1};
const int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double eps = 1e-8;
const int N = 10;
int n, k;
int a[N], r[N];
void dfs(int u)
{
	if (u > n)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
			sum += r[i];
		if (sum % k == 0)
		{
			for (int i = 1; i <= n; i++)
				cout << r[i] << " \n"[i == n];
		}
		return;
	}
	for (int i = 1; i <= a[u]; i++)
		r[u] = i, dfs(u + 1);
}
void solve()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1);
}
int main()
{
//	freopen("in.txt", "rt", stdin);
//	freopen("out.txt", "wt", stdout);
	PASE;
	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
