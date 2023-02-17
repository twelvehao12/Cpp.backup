#include <bits/stdc++.h>
using namespace std;
#define M 100000 + 10
typedef long long ll;

int n, q;
int v[100000 + 10][100000 + 10];    // MLE
/*
    改进思路：
        - 使用vector<自定义struct>，但也有可能MLE
        - 用STL map，还没学，学会再来
*/
// int v[10][10];

int main()
{
    for (ll i = 0; i < M; i++)
    {
        for (ll j = 0; j < M; j++)
        {
            v[i][j] = 0;
        }
    }
    cin >> n >> q;
    while (q--)
    {
        int cmd, shl, p;
        cin >> cmd >> shl >> p;
        switch (cmd)
        {
        case 1:
            ll num;
            cin >> num;
            v[shl][p] = num;
            break;
        case 2:
            cout << v[shl][p] << endl;
            break;
        default:
            break;
        }
    }
}