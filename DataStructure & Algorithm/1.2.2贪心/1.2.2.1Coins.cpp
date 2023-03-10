#include <bits/stdc++.h>
using namespace std;

const int v[6] = {1, 5, 10, 50, 100, 500};
int c[6], a;

void solve()
{
    int ans = 0;
    for (int i = 5; i >= 0; i--)
    {
        int t = min(a / v[i], c[i]);
        a -= t * v[i];
        ans += t;
    }
    cout << ans << endl;
}

int main()
{
    for (int i = 0; i < 6; i++)
    {
        cin >> c[i];
    }
    cin >> a;
    solve();
    return 0;
}