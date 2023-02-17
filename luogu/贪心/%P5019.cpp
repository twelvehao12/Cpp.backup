#include <bits/stdc++.h>
using namespace std;

int n, d[100000 + 10];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> d[i];
    // sort(d, d + n);
    // int fnt = 0, bck = n, cnt = 0, sum = 0;
    // while (fnt != bck - 1)
    // {
    //     cnt += d[fnt] - sum;
    //     sum += d[fnt] - sum;
    //     fnt++;
    // }
    // cout << cnt << endl;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (d[i] > d[i - 1])
        {
            cnt += d[i] - d[i - 1];
        }
    }
    cout << cnt + d[0] << endl;
    return 0;
}