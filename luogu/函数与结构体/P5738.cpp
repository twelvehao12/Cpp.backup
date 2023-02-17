#include <bits/stdc++.h>
using namespace std;

int sumList(list<double> a)
{
    int sum = 0;
    for (list<double>::iterator it = a.begin(); it != a.end(); it++)
    {
        sum += *it;
    }
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    double max = -1;
    for (int i = 0; i < n; i++)
    {
        list<double> point;
        for (int j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            point.push_back(a);
        }
        point.sort();
        point.pop_back();
        point.pop_front();
        int sum;
        sum = sumList(point);
        if (sum > max)
        {
            max = sum;
        }
    }
    printf("%.2f", max / float(m - 2));
    return 0;
}