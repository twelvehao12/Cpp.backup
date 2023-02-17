#include <bits/stdc++.h>
using namespace std;
#define M 100 + 10
const int inf = 1e8;
typedef pair<int, int> p;

char maze[M][M];
int n, m, d[M][M];
int sx, sy, gx, gy;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs()
{
    queue<p> que;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            d[i][j] = inf;

    que.push(p(sx, sy));
    d[sx][sy] = 0;

    while (que.size())
    {
        p tmp = que.front();
        que.pop();
        if (tmp.first == gx && tmp.second == gy)
            break;

        for (int i = 0; i < 4; i++)
        {
            int nx = tmp.first + dx[i];
            int ny = tmp.second + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && maze[nx][ny] != '#' && d[nx][ny] == inf)
            {
                que.push(p(nx, ny));
                d[nx][ny] = d[tmp.first][tmp.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
            if (maze[i][j] == 'S')
            {
                sx = i;
                sy = j;
            }
            else if (maze[i][j] == 'G')
            {
                gx = i;
                gy = j;
            }
        }
    }
    cout << bfs() << endl;
}