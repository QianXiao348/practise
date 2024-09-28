#include <bits/stdc++.h> //���׷� 
using namespace std;
#define PASE cin.tie(0), ios::sync_with_stdio(false);  // �Ż��������
typedef long long LL;
const int N = 2e5 + 10;
void solve()
{
	int n, m, k, w;
	cin >> n >> m >> k >> w;  // ��ȡ����ߴ磬�ӷ���߳����ʹ����ɵ�����
	vector<int> a(w);
	for (int i = 0; i < w; i++) cin >> a[i];  // ��ȡ�����ɵ����
	vector<LL> f;  // �洢ÿ��λ�õĹ��׶�
	f.reserve(n * m);  // Ԥ���ռ����Ż�����
	// ���������е�ÿ��λ�ã�����ÿ��λ�õĹ��׶�
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int i1 = max(0, i - k + 1);  // ���㵱ǰ�������Ӱ�����С�к�
			int j1 = max(0, j - k + 1);  // ���㵱ǰ�������Ӱ�����С�к�
			int i2 = min(i, n - k);      // ���㵱ǰ�������Ӱ�������к�
			int j2 = min(j, m - k);      // ���㵱ǰ�������Ӱ�������к�
			f.push_back(1LL * (i2 - i1 + 1) * (j2 - j1 + 1));  // ���㹱�׶Ȳ��洢
		}
	}
	// �������ɵ���ߺ͹��׶ȷֱ�Ӹߵ�������
	sort(a.begin(), a.end(), greater<int>());
	sort(f.begin(), f.end(), greater<LL>());
	// ��������Ӿ�Ч��
	LL ans = 0;
	for (int i = 0; i < w; i++) ans += a[i] * f[i];  // ƥ����ߺ͹��׶Ȳ��ۼ�
	cout << ans << endl;  // ������
}

int main()
{
	PASE;
	int t;
	cin >> t;  // ��ȡ��������������
	while (t--)
	{
		solve();  // ����ÿ����������
	}
	return 0;
}

