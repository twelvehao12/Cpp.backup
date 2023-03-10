#include <bits/stdc++.h>
using namespace std;
#define M 10

bool used[M];
int perm[M], perm2[M];

void printPerm(int perm[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << perm[i] << ' ';
    }
    cout << endl;
    return;
}

void permutation1(int pos, int n)
{
    if (pos == n)
    {
        printPerm(perm, n);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!used[i])
        {
            perm[pos] = i + 1;
            used[i] = 1;
            permutation1(pos + 1, n);
            used[i] = 0;
        }
    }
    return;
}

void permutation2(int n)
{
    for (int i = 0; i < n; i++)
    {
        perm2[i] = i + 1;
    }
    do
    {
        printPerm(perm2, n);
    } while (next_permutation(perm2, perm2 + n));
    cout << endl;
    return;
}

int main()
{
    cout << "-------------------------------p1----------------------------------" << endl;
    permutation1(0, 3);
    cout << "-------------------------------p2----------------------------------" << endl;
    permutation2(3);
    return 0;
}