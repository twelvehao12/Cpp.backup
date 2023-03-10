#include <bits/stdc++.h>
using namespace std;
#define M 100000 + 10
typedef long long ll;

ll n, x, a[M];

void solve()
{
    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] > x)
        {
            ans += a[i] - x;
            a[i] = x;
        }
        /*原来的写法有误：
            判断了a[i]>x就会跳过else的情况，这样会出现数组里的每个数都小于47，
            但是相邻两个数的和大于47的情况
         */
        // else
        // { // a[i]<=x
        //     if (a[i + 1] + a[i] > x)
        //     {
        //         ans += a[i + 1] + a[i] - x;
        //         a[i + 1] -= a[i + 1] + a[i] - x;
        //     }
        // }

        // 改进2：
        if (a[i + 1] + a[i] > x)
        {
            ans += a[i + 1] + a[i] - x;
            a[i + 1] -= a[i + 1] + a[i] - x;
        }
    }

    // 改进1（借鉴题解，新开一个循环）：
    // for (int i = 1; i < n; i++)
    // {
    //     if (a[i] + a[i - 1] > x)
    //     {
    //         ans += a[i] + a[i - 1] - x;
    //         a[i] = x - a[i - 1]; // 或者写成a[i + 1] -= a[i + 1] + a[i] - x;
    //     }
    // }
    cout << ans << endl;
    return;
}

int main()
{
    cin >> n >> x;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    solve();
    return 0;
}