#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll l, n, m;
ll d[50000 + 10];

bool check(ll x)
{
    ll now = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i] - now < x)
            cnt++;
        else
            now = d[i];
    }
    if (l - now < x)
        cnt++;
    return cnt <= m;
}

ll solve()
{
    ll left = 0, right = 1e9;
    ll mid;
    while (left < right-1)
    {
        mid = (left + right) >> 1;
        if (check(mid))
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    return left;
}

int main()
{
    cin >> l >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    cout << solve() << endl;
    return 0;
}