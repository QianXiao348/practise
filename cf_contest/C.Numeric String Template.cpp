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
{ // ƥ�亯������������ַ��� s �Ƿ�������� a ��ģʽ
	if (s.size() != n)
		return false;
	vector<int> f(26, -1);
	vector<int> b(n);
	for (int i = 0; i < n; i++)
	{
		b[i] = f[s[i] - 'a']; // ��ȡ��ǰ�ַ��ϴγ��ֵ�λ��
		f[s[i] - 'a'] = i;// ���µ�ǰ�ַ���������λ��
	}
	return a == b;
}
void solve()
{
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//����һ��ӳ�����¼ÿ�������ϴγ��ֵ�λ��
	map<int, int> f;
	for (int i = 0; i < n; i++)
	{
		int x;
		if (f.count(a[i]))// ����������Ѿ����ֹ�
			x = f[a[i]];// ��ȡ�������ϴγ��ֵ�λ��
		else
			x = -1;
		f[a[i]] = i;// ���¸����ֵ�������λ��
		a[i] = x;// ����ǰλ�õ�ֵ�滻Ϊģʽֵ
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
