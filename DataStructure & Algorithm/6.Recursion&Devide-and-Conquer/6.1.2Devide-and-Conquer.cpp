#include <bits/stdc++.h>
using namespace std;

int findMaximum(int a[], int l, int r)
{
    int x;
    int m = (l + r) / 2;
    if (l == r - 1)
        return a[l];
    else{
        int u = findMaximum(a, l, m);
        int v = findMaximum(a, m, r);
        x = max(u, v);
    }
    return x;
}

int main()
{
}