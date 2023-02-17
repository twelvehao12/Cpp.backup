#include <bits/stdc++.h>
using namespace std;

bool search(int a[], int n, int key)
{
    a[n] = key;
    int i = 0;
    while (a[i] != key)
    {
        i++;
    }
    return i != n;
}

int main()
{
    int n;
    cin >> n;
    int s[10000 + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int q;
    cin >> q;
    int cnt = 0;
    for (int i = 0; i < q; i++)
    {
        int key;
        cin >> key;
        if (search(s, n, key))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}