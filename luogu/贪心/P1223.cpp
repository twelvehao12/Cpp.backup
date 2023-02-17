#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, ll> pr;

int n;
pr t[1000 + 10];

bool cmp(pr a, pr b)
{
    return a.second < b.second;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i].second;
        t[i].first = i;
    }
    // t[0].second = t[1].second;

    sort(t + 1, t + 1 + n, cmp);

    double sum;
    for (int i = 1; i <= n; i++)
    {
        cout << t[i].first << ' ';
        sum += t[i].second * (n - i);
    }
    cout << endl;
    printf("%.2f\n", sum / n);
    // cout << sum / n << endl;
}