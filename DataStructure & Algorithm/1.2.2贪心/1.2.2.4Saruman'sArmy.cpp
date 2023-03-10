#include <bits/stdc++.h>
using namespace std;
#define M 10 + 5

int n, r, x[M];

void solve()
{
    sort(x, x + n);
    int i = 0, ans = 0;
    while (i < n)
    {
        int s = x[i++];
        while (i < n && x[i] <= s + r)
            i++;
        int p = x[i - 1];
        while (i < n && x[i] <= p + r)
            i++;
        ans++;
    }
    cout << ans << endl;
    return;
}

int main()
{
    cin >> n >> r;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    solve();
    return 0;
}
