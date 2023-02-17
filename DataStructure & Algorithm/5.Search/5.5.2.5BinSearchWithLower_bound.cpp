#include <bits/stdc++.h>
using namespace std;

int a[1000000];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int q, k, sum = 0;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &k);
        if (*lower_bound(a, a + n, k) == k)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}