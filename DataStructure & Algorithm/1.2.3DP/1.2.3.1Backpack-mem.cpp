#include <bits/stdc++.h>
using namespace std;
#define M 100 + 10

int n, W;
int w[M], v[M], dp[M][M];

int dfs(int i, int j)
{
    if (dp[i][j] >= 0)
    {
        return dp[i][j];
    }
    int res;
    if (i == n)
        res = 0;
    else if (j < w[i])
    {
        res = dfs(i + 1, j);
    }
    else
    {
        res = max(dfs(i + 1, j), dfs(i + 1, j - w[i]) + v[i]);
    }
    return res;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }
    cin >> W;
    memset(dp, -1, sizeof(dp));
    cout << dfs(0, W) << endl;
    return 0;
}