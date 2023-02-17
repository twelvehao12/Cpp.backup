#include <bits/stdc++.h>
using namespace std;

int n, ans[14];
bool flg[14];

void print()
{
    for (int i = 1; i <= n; i++)
    {
        cout << setw(5) << ans[i];
    }
    cout << endl;
}

void dfs(int x)
{
    if (x >= n)
    {
        print();
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!flg[i])
        {
            ans[x + 1] = i;
            flg[i] = 1;
            dfs(x + 1);
            flg[i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    dfs(0);
}