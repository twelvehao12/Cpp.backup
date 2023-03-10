#include <bits/stdc++.h>
using namespace std;
#define M 10

int perm[M], n;

void printPerm(int perm[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << perm[i];
    }
    cout << endl;
    return;
}

void permutation(int n)
{
    do
    {
        printPerm(perm, n);
    } while (next_permutation(perm, perm + n));
    return;
}

int main()
{
    cin >> n;
    // 重要！！！：初始化perm[]
    for (int i = 0; i < n; i++)
    {
        perm[i] = i + 1;
    }
    permutation(n);
    return 0;
}