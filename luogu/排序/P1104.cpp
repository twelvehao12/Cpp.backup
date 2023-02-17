#include <bits/stdc++.h>
using namespace std;

struct stu
{
    int idx;
    string name;
    int y, m, d;
};

stu cls[100 + 10];

bool cmp(stu a, stu b)
{
    if (a.y != b.y)
        return a.y < b.y;
    else if (a.m != b.m)
        return a.m < b.m;
    else if (a.d != b.d)
        return a.d < b.d;
    else
        return a.idx > b.idx;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> cls[i].name >> cls[i].y >> cls[i].m >> cls[i].d;
        cls[i].idx = i;
    }
    sort(cls, cls + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << cls[i].name << endl;
    }
    return 0;
}