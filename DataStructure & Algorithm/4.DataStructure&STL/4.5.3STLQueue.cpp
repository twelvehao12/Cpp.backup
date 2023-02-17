#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, t;
    string name;
    queue<pair<string, int>> que;

    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> t;
        que.push(make_pair(name, t));
    }

    pair<string, int> u;
    int elaps = 0, a;

    while (!que.empty())
    {
        u = que.front();
        que.pop();
        a = min(u.second, q);
        u.second -= a;
        elaps += a;
        if(u.second>0){
            que.push(u);
        }else{
            cout << u.first << ' ' << u.second << endl;
        }
    }
    return 0;
}