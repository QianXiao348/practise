#include <bits/stdc++.h> //贡献法 
using namespace std;
#define PASE cin.tie(0), ios::sync_with_stdio(false);  // 优化输入输出
typedef long long LL;
const int N = 2e5 + 10;
void solve()
{
	int n, m, k, w;
	cin >> n >> m >> k >> w;  // 读取网格尺寸，子方块边长，和大猩猩的数量
	vector<int> a(w);
	for (int i = 0; i < w; i++) cin >> a[i];  // 读取大猩猩的身高
	vector<LL> f;  // 存储每个位置的贡献度
	f.reserve(n * m);  // 预留空间以优化性能
	// 遍历网格中的每个位置，计算每个位置的贡献度
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int i1 = max(0, i - k + 1);  // 计算当前坐标可以影响的最小行号
			int j1 = max(0, j - k + 1);  // 计算当前坐标可以影响的最小列号
			int i2 = min(i, n - k);      // 计算当前坐标可以影响的最大行号
			int j2 = min(j, m - k);      // 计算当前坐标可以影响的最大列号
			f.push_back(1LL * (i2 - i1 + 1) * (j2 - j1 + 1));  // 计算贡献度并存储
		}
	}
	// 将大猩猩的身高和贡献度分别从高到低排序
	sort(a.begin(), a.end(), greater<int>());
	sort(f.begin(), f.end(), greater<LL>());
	// 计算最大视觉效果
	LL ans = 0;
	for (int i = 0; i < w; i++) ans += a[i] * f[i];  // 匹配身高和贡献度并累加
	cout << ans << endl;  // 输出结果
}

int main()
{
	PASE;
	int t;
	cin >> t;  // 读取测试用例的数量
	while (t--)
	{
		solve();  // 处理每个测试用例
	}
	return 0;
}

