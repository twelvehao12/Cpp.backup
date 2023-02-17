#include <bits/stdc++.h>
using namespace std;
#define M 100 + 10

int n, m;
char yard[M][M];

void dfs(int x, int y)
{
    yard[x][y] = '*';
    for (int dx = -1; dx <= 1; dx++)
    {
        for (int dy = -1; dy <= 1; dy++)
        {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && yard[nx][ny] == 'W')
            {
                dfs(nx, ny);
            }
        }
    }
    return;
}

void solve()
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (yard[i][j] == 'W')
            {
                dfs(i, j);
                cnt++;
            }
        }
    cout << cnt << endl;
    return;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> yard[i][j];
        }
    }
    solve();
    return 0;
}