#include <bits/stdc++.h>
using namespace std;
#define M 100 + 10

int n, W, w[M], v[M], dp[M][M];

void solve()
{
    // memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    { // index
        for (int j = 0; j <= W; j++)
        { // weight
            if (j < w[i])
                dp[i][j] = dp[i - 1][j];
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
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