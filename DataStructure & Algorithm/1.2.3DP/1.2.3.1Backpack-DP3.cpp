#include <bits/stdc++.h>
using namespace std;
#define M 100 + 10

int n, W, w[M], v[M];

void solve()
{
    int dp[M][M];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            // 判断选w[i]和不选w[i]哪个比较有利
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
            if (j + w[i] <= W)
            {
                dp[i + 1][j + w[i]] = max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
                // 先把w[i]给选上
                // 写成dp[i + 1][j + w[i]] = dp[i][j] + v[i];好像也可以
            }
        }
    }
    cout << dp[n][W] << endl;
    return;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    cin >> W;
    solve();
    return 0;
}