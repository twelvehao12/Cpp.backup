#include <bits/stdc++.h>
using namespace std;
#define M 100 + 10

int n, W, w[M], v[M], dp[M][M];

void solve()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (j < w[i])
                dp[i][j] = dp[i - 1][j];
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - w[i]] + v[i]);
                /*
                    - 跟01背包问题的区别：
                        01背包: max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
                        完全背包: max(dp[i - 1][j], dp[i][j - w[i]] + v[i]);
                    01背包是选出 该元素正上方情况的最优解 和正上方选择了第i个物品的价值
                    二者之间的最优解
                    而完全背包是选择了 该元素正上方情况的最优解 和选择k-1个第i个物品的价值
                    二者之间的最优解

                    - 和ver1.的区别：
                        通过不断访问dp数组已经计算出的值来减小循环层数
                */
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