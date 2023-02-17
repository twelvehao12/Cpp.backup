#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll line[100000 + 10];
//60: 没有加入point比所有分数线都大/小的情况
// ll get_dissatisfy(ll point, ll m)
// {
//     ll left = 0, right = 0;
//     left = abs(*(lower_bound(line, line + m, point) - 1) - point);
//     right = *lower_bound(line, line + m, point) - point;
//     return min(left, right);
// }

//80: ?????????
// ll get_dissatisfy(ll point, ll m)
// {
//     if (point > line[m - 1])
//     {
//         return point - line[m];
//     }
//     else if (point < line[0])
//     {
//         return line[0] - point;
//     }
//     ll left = 0, right = 0;
//     left = abs(*(lower_bound(line, line + m, point) - 1) - point);
//     right = abs(*lower_bound(line, line + m, point) - point);
//     return min(left, right);
// }

ll get_dissatisfy(ll point, ll m)
{
    ll left = 0,
       right = 0;
    left = lower_bound(line, line + m, point) - line - 1;
    right = left + 1;
    ll numl = 99999999999999999, numr = 999999999999999999;
    if (left != -1)
    {
        numl = abs(line[left] - point);
    }
    if (right != m)
    {
        numr = abs(line[right] - point);
    }
    return min(numl, numr);
}

int main()
{
    ll n, m;
    cin >> m >> n;
    for (ll i = 0; i < m; i++)
    {
        cin >> line[i];
    }
    ll sum = 0;
    sort(line, line + m);
    for (ll i = 0; i < n; i++)
    {
        ll point;
        cin >> point;
        // sum += *lower_bound(line, line + m, point) - point;
        sum += get_dissatisfy(point, m);
    }
    cout << sum << endl;
}