#include <bits/stdc++.h>
using namespace std;

int n, p, q, r, s;
int a[100 + 10];

// void myswap(int a[], int p, int q, int r, int s)
// {
//     int b[100 + 10];
//     int j = 1;
//     for (int i = p; i <= q; i++)
//     {
//         b[j] = a[i];
//         j++;
//     }
//     j = r;
//     for (int i = p; i <= q; i++)
//     {
//         a[i] = a[r];
//         j++;
//     }
//     j = 1;
//     for (int i = r; i <= s; i++)
//     {
//         a[i] = b[j];
//         j++;
//     }
// }

int main()
{
    cin >> n >> p >> q >> r >> s;
    for (int i = 1; i < p; i++)
    {
        cin >> a[i];
    }
    for (int i = r; i <= s; i++)
    {
        cin >> a[i];
    }
    for (int i = q + 1; i < r; i++)
    {
        cin >> a[i];
    }
    for (int i = p; i <= q; i++)
    {
        cin >> a[i];
    }
    for (int i = s + 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // myswap(a, p, q, r, s);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}