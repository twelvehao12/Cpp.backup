#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k;
ll li[100000000 + 10];

bool check(ll x)
{
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cnt += li[i] / x;
    }
    return cnt >= k;
}

ll solve()
{
    ll l = 0, r = 1e9;
    ll mid;
    while (l < r-1)
    {
        mid = (l + r) >> 1;
        if (check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    // 如果1cm都分不出l会一直等于0，不需要判断了（判断了会出现check(0)的情况导致Arithmetic exception）
    // if (l == r - 1 && !check(l))
    // {
    //     return 0;
    // }
    return l;
}

int main()
{
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        cin >> li[i];
    }
    cout << solve() << endl;
    return 0;
}