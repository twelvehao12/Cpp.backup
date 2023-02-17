#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> v;

int main()
{
    ll n, c;
    cin >> n >> c;
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += distance(v.begin(), upper_bound(v.begin(), v.end(), v[i] + c)) - distance(v.begin(), lower_bound(v.begin(), v.end(), v[i] + c));
    }
    cout << ans << endl;
}
