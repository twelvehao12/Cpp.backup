#include <bits/stdc++.h>
using namespace std;
#define M 1000 + 10

int n, m;
char s[M], t[M];

void solve()
{
    int dp[M][M];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i] == t[j]) // s的第i个字符和t的第j个字符相同
            {
                dp[i][j] = dp[i - 1][j - 1] + 1; // 最大子串长度等于 去除掉s[i]t[j]的两个字符串的最大子串长度+1
            }
            else // 最后一个字符不同
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); // 去掉s的最后一个字符或者去掉t的最后一个字符讨论LCS
            }
        }
    }
    cout << dp[n][m] << endl;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> t[i];
    }
    solve();
}