#include <bits/stdc++.h>
using namespace std;
#define N 100000
typedef pair<int, int> P;

int n;
P t[N];

bool cmp(P a, P b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}

void solve()
{
    sort(t, t + n, cmp);
    int ans = 0, prev = 0;
    for (int i = 0; i < n; i++)
    {
        if (prev < t[i].first)
        {
            ans++;
            prev = t[i].second;
        }
    }
    cout << ans << endl;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].first >> t[i].second;
    }
    solve();
    return 0;
}