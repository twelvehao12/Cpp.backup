#include <bits/stdc++.h>
using namespace std;
#define M 20 + 5

int n, r, ans[M], flg[M];

void print()
{
    for (int i = 1; i <= r; i++)
    {
        cout << setw(3) << ans[i];
    }
    cout << endl;
    return;
}

void dfs(int x)
{
    if (x > r)
    {
        print();
        return;
    }
    for (int i = x; i <= n; i++)
    {
        if (!flg[i] && i > ans[x - 1])
        {
            ans[x] = i;
            flg[i] = 1;
            dfs(x + 1);
            flg[i] = 0;
        }
    }
}

int main()
{
    cin >> n >> r;
    ans[0] = -1;
    dfs(1);
}