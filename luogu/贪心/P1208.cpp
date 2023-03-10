#include <bits/stdc++.h>
using namespace std;
#define M 2 * 1000000 + 10
typedef pair<int, int> PA;
typedef long long ll;

int m, n;
PA pa[M];

bool cmp(PA a, PA b)
{
    return a.first < b.first;
}

void solve()
{
    ll ans = 0;
    int i = 0;
    sort(pa, pa + n, cmp);
    while (n > 0) // while (n>=0) 错了, 应该去掉等号
    /*
        没去等号的话有一个case会segmentation fault(RE)
        in: 0 0
        out: 0
    */
    {
        n -= pa[i].second;
        ans += pa[i].first * pa[i].second;
        i++;
    }
    if (n < 0)
    {
        n = -n;
        ans -= n * pa[--i].first;
    }
    cout << ans << endl;
    return;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int p, a;
        cin >> p >> a;
        pa[i] = make_pair(p, a);
    }
    solve();
    return 0;
}