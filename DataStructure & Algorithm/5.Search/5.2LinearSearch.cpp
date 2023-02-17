#include <bits/stdc++.h>
using namespace std;

int s[10000 + 10];
int t[500 + 10];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> t[i];
    }

    int cnt=0;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (t[i] == s[j])
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}