#include <bits/stdc++.h>
using namespace std;
#define M 1000 + 10

int T, m, t[M], v[M];

void solve()
{
    long long ans[M][M];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= T; j++)
        {
            if (j < t[i])
                ans[i][j] = ans[i - 1][j];
            else
            {
                ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - t[i]] + v[i]);
            }
        }
    }
    cout << ans[m][T] << endl;
}

int main()
{
    cin >> T >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> t[i] >> v[i];
    }
    solve();
    return 0;
}