#include <bits/stdc++.h>
using namespace std;

// vector<int> v;
int v[1000000 + 10];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int tmp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        // v.push_back(tmp);
        v[i] = tmp;
    }
    // vector<int>::iterator it;
    int *it;
    for (int i = 0; i < m; i++)
    {
        // int tmp;
        scanf("%d", &tmp);
        // it = find(v.begin(), v.end(), tmp);
        it = lower_bound(v, v + n, tmp);
        // printf("%d ", it != v.end() ? (int)distance(v.begin(), ++it) : -1);
        printf("%d ", *it == tmp ? (int)distance(v, ++it) : -1);
    }
    printf("\n");
    return 0;
}