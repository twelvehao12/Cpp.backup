#include <bits/stdc++.h>
using namespace std;
#define M 20000 + 10

int n, l[M];

void solve()
{
    int ans = 0;
    while (n > 1)
    {
        int f = 0, s = 1;
        if (l[f] > l[s])
            swap(f, s);
        for (int i = 2; i < n; i++)
        {
            if (l[i] < l[s])
                s = i;
            else if (l[i] < l[f])
            {
                s = f;
                f = i;
            }
        }

        int t = l[f] + l[s];
        ans += t;

        if (f == n - 1)
            swap(f, s); // 如果最小值在最后，就直接丢掉
        l[f] = t;       // 如果没有在最后就把最后一项复制到前面，再丢掉
        l[s] = l[n - 1];
        n--;
    }
    cout << ans << endl;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    solve();
    return 0;
}