#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int dp[N][3];//ǰi����Ϸ���ҳ�j��Ӯ�����������Ϸ����  0:ʯͷ  1:��  2:���� 
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        if (s[i] == 'R')
        {
            dp[i + 1][0] = max(dp[i][1], dp[i][2]);
            dp[i + 1][1] = max(dp[i][0], dp[i][2]) + 1;
        }
        else if (s[i] == 'P')
        {
            dp[i + 1][1] = max(dp[i][0], dp[i][2]);
            dp[i + 1][2] = max(dp[i][0], dp[i][1]) + 1;
        }
        else
        {
            dp[i + 1][2] = max(dp[i][0], dp[i][1]);
            dp[i + 1][0] = max(dp[i][1], dp[i][2]) + 1;
        }
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
}
