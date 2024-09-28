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
const int N = 4e5 + 10;
int n, m;
int a[N];
int s[N];
void solve()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i + n] = a[i];
	}
	for (int i = 1; i <= n * 2; i++)
		s[i] = (s[i - 1] + a[i]) % m;
	map<int, int> cnt;
	LL ans = 0;
	for (int i = 1; i <= n; i++)
		cnt[s[i]]++;
	for (int i = 1; i <= n; i++)
	{
		cnt[s[i]]--;
		ans += cnt[s[i + n]];
		cnt[s[i + n]]++;
	}
	cout << ans << endl;
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
