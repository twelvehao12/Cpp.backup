#include <bits/stdc++.h>
using namespace std;
#define M 10
int a, b, c, num[M];
bool used[M], flg = 0;

int con(int m)
{
    int sum = 0;
    for (int i = m * 3 - 2; i <= m * 3; i++)
    {
        sum *= 10;
        sum += num[i];
    }
    return sum;
}

void dfs(int n)
{
    if (n == M && b * con(1) == a * con(2) && c * con(1) == a * con(3))
    {
        flg = 1;
        cout << con(1) << ' ' << con(2) << ' ' << con(3) << endl;
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (!used[i])
        {
            num[n] = i;
            used[i] = 1;
            dfs(n + 1);
            used[i] = 0;
        }
    }
    return;
}

int main()
{
    cin >> a >> b >> c;
    dfs(1);
    if (!flg)
    {
        cout << "No!!!" << endl;
    }
}