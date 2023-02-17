#include <bits/stdc++.h>
using namespace std;

int stu[2000000 + 10];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i];
    }

    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        cout << stu[tmp - 1] << endl;
    }
}