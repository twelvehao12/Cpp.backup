#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tree[1000000 + 10];

int main()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> tree[i];
    }

    sort(tree, tree + n);
    ll left = 0, right = n;
    ll mid;
    while (left < right)
    {
        mid = (left + right) / 2;
        ll sum = 0;
        for (ll i = mid; i != n; i++)
        {
            sum += tree[i] - tree[mid];
        }
        if (sum == m)
        {
            cout << tree[mid] << endl;
            return 0;
        }
        else if (sum > m)
        {
            left = mid + 1;
        }
        else if (sum < m)
        {
            right = mid;
        }
    }

    for (ll i = tree[left - 1]; i < tree[left] + 1; i++)
    {
        mid = (tree[left - 1] + tree[left] + 1) / 2;
        ll sum = 0;
        for (ll j = left; j < n; j++)
        {
            sum += tree[j] - mid;
        }
        if (sum == m)
        {
            cout << mid << endl;
            return 0;
        }
        else if (sum > m)
        {
            tree[left - 1] = mid;
        }
        else if (sum < m)
        {
            tree[left] = mid - 1;
        }
    }
    cout << mid << endl;
    return 0;
}