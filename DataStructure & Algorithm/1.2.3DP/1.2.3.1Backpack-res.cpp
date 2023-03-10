#include <bits/stdc++.h>
using namespace std;
#define M 100 + 10

int n, W;
int w[M], v[M];

int dfs(int i, int j) // 数组第i个物品，可选择j克
{
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
    cout << dfs(0, W) << endl;
    return 0;
}