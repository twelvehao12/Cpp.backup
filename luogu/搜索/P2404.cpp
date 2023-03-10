#include <bits/stdc++.h>
using namespace std;
#define M 9 + 1

int n, num[M] = {1}, sum = 0;

void dfs(int m, int sum)
{
    if (m > n + 1)
        return;
    if (sum == n)
    {
        for (int i = 1; i < m - 1; i++)
        {
            cout << num[i] << '+';
        }
        cout << num[m - 1] << endl;
        return;
    }
    for (int i = num[m - 1]; i <= 9; i++)
    {
        if (m == 1 && i == n)
            break;
        num[m] = i;
        sum += i;
        dfs(m + 1, sum);
        sum -= i;
    }
    return;
}

int main()
{
    cin >> n;
    dfs(1, sum);
}