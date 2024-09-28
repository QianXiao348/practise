#include <bits/stdc++.h>
using namespace std;
#define PASE cin.tie(0), ios::sync_with_stdio(false);
#define fi first
#define se second
typedef long long LL;
typedef pair<int, int> PII;
const int dx[] = {-1, 0, 1, 0, -1, 1, 1, -1};
const int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
const int MOD = 1e9 + 7;
const int N = 2e5 + 10;
int n;
bool check(const string &s, vector<int> &a)
{ // 匹配函数，用来检查字符串 s 是否符合数组 a 的模式
	if (s.size() != n)
		return false;
	vector<int> f(26, -1);
	vector<int> b(n);
	for (int i = 0; i < n; i++)
	{
		b[i] = f[s[i] - 'a']; // 获取当前字符上次出现的位置
		f[s[i] - 'a'] = i;// 更新当前字符的最后出现位置
	}
	return a == b;
}
void solve()
{
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//创建一个映射表，记录每个数字上次出现的位置
	map<int, int> f;
	for (int i = 0; i < n; i++)
	{
		int x;
		if (f.count(a[i]))// 如果该数字已经出现过
			x = f[a[i]];// 获取该数字上次出现的位置
		else
			x = -1;
		f[a[i]] = i;// 更新该数字的最后出现位置
		a[i] = x;// 将当前位置的值替换为模式值
	}
	int m;
	cin >> m;
	while (m--)
	{
		string s;
		cin >> s;
		if (check(s, a))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
int main()
{
//	freopen("in.txt", "rt", stdin);
//	freopen("out.txt", "wt", stdout);
	PASE;
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
