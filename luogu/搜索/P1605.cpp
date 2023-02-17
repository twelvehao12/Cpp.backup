#include <bits/stdc++.h>
using namespace std;
#define M 5 + 5
#define N 5 + 5
#define T 10 + 5
typedef pair<int, int> dot;

int m, n, t;
dot s, e;
int cnt = 0;
char field[N][M];

void dfs(dot now)
{
    if (now.first < 1 || now.second < 1 || now.first > n || now.second > m)
        return;
    if (now.first == e.first && now.second == e.second)
    {
        cnt++;
        return;
    }
    if (field[now.first][now.second] == '#' || field[now.first][now.second] == '&')
        return;
    field[now.first][now.second] = '&';
    // dfs(dot(now.first + 1, now.second));
    // dfs(dot(now.first - 1, now.second));
    // dfs(dot(now.first, now.second + 1));
    // dfs(dot(now.first, now.second - 1));
    dfs(dot(now.first + 1, now.second));
    dfs(dot(now.first, now.second + 1));
    dfs(dot(now.first - 1, now.second));
    dfs(dot(now.second, now.second - 1));
    field[now.first][now.second] = '0';
    return;
}

int main()
{
    cin >> n >> m >> t;
    cin >> s.first >> s.second >> e.first >> e.second;
    memset(field, '0', sizeof(field));
    field[s.first][s.second] = 'S';
    field[e.first][e.second] = 'E';
    for (int i = 0; i < t; i++)
    {
        dot tmp;
        cin >> tmp.first >> tmp.second;
        field[tmp.first][tmp.second] = '#';
    }

    if (field[e.first][e.second] == '#')
    {
        cout << 0 << endl;
        return 0;
    }

    dfs(s);
    cout << cnt << endl;
    return 0;
}