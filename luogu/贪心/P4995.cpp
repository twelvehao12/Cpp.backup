#include <bits/stdc++.h>
using namespace std;
#define M 300 + 10
typedef long long ll;

int n, h[M];
bool flg[M];

int jump(int a, int b, int i) // 从高度a跳到高度b, 目标石头是第i个
{
    flg[i] = 1;
    return (a - b) * (a - b);
}

void solve()
{
    ll ans = 0; // ans会爆long long很无语。。。原来的思路是对的
    // int l = 0, r = n;
    sort(h, h + n);
    ans += jump(0, h[n - 1], n - 1); // first step
    ans += jump(h[n - 1], h[0], 0);  // second step

    int tmp = 1;
    while ((n % 2) ? !flg[(n + 1) / 2 - 1] : !flg[n / 2 - 1])
    {
        ans += jump(h[tmp - 1], h[n - 1 - tmp], n - 1 - tmp);
        ans += jump(h[n - 1 - tmp], h[tmp], tmp);
        // flg[tmp] = 1;
        tmp++;
    }
    // while (r > l)
    // {
    //     ans += jump(h[l], h[r]);
    //     l++;
    //     ans += jump(h[r], h[l]);
    //     r--;
    // }
    cout << ans << endl;
    return;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    solve();
    return 0;
}

// AC思路

// #include <bits/stdc++.h>
// using namespace std;
// #define M 300 + 10
// typedef long long ll;

// int n, h[M];
// // bool flg[M];

// int jump(int a, int b) // 从高度a跳到高度b, 目标石头是第i个
// {
//     // flg[i] = 1;
//     return (a - b) * (a - b);
// }

// void solve()
// {
//     ll ans = 0;
//     int l = 0, r = n;
//     sort(h + 1, h + n + 1);
//     // ans += jump(0, h[n - 1], n - 1); // first step
//     // ans += jump(h[n - 1], h[0], 0);  // second step

//     // int tmp = 1;
//     // while ((n % 2) ? !flg[(n + 1) / 2 - 1] : !flg[n / 2 - 1])
//     // {
//     //     ans += jump(h[tmp - 1], h[n - 1 - tmp], n - 1 - tmp);
//     //     ans += jump(h[n - 1 - tmp], h[tmp], tmp);
//     //     // flg[tmp] = 1;
//     //     tmp++;
//     // }
//     while (r > l)
//     {
//         ans += jump(h[l], h[r]);
//         l++;
//         ans += jump(h[r], h[l]);
//         r--;
//     }
//     cout << ans << endl;
//     return;
// }

// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> h[i];
//     }
//     solve();
//     return 0;
// }