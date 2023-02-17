#include <bits/stdc++.h>
using namespace std;

queue<int> que;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        que.push(i);
    }

    while (!que.empty())
    {
        for (int i = 1; i <= m; i++)
        {
            if (i != m)
            {
                int tmp;
                tmp = que.front();
                que.pop();
                que.push(tmp);
            }
            else
            {
                cout << que.front() << ' ';
                que.pop();
            }
        }
    }
}