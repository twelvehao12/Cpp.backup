#include <bits/stdc++.h>
using namespace std;
#define M 100 + 10

int n, w[M], v[M], W, dp[M][M];

void solve()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            for (int k = 0; k * w[i] <= j; k++)
            { // k=0代表不选物品i，k!=0代表选k个物品i
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * w[i]] + k * v[i]);
            }
        }
    }
    cout << dp[n][W] << endl;
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