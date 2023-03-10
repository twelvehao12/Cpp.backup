#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000 + 10

ll r, t[M][M], dp[M][M];

void solve()
{
    for (int j = 1; j <= r; j++) // 第一次提交88分：j<r没加等号
    {
        dp[r][j] = t[r][j];
    }

    for (int i = r - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = max(dp[i + 1][j] + t[i][j], dp[i + 1][j + 1] + t[i][j]);
        }
    }
    cout << dp[1][1] << endl;
}

int main()
{
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> t[i][j];
        }
    }
    solve();
    return 0;
}