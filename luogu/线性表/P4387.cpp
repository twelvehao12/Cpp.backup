#include <bits/stdc++.h>
using namespace std;
#define M 100000 + 10

int q, n, inque[M], outque[M];
stack<int> stk;

// void solve()
// {
//     int pout = 0, pin = 0;
//     bool flg = 1;
//     while (pout <= n)
//     {
//         while (pin <= n && inque[pin] != outque[pout])
//         {
//             stk.push(inque[pin]);
//         }
//     }
//     if (flg)
//     {
//         cout << "Yes" << endl;
//         return;
//     }
//     cout << "No" << endl;
//     return;
// }

int main()
{
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> inque[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> outque[j];
        }
        // solve();
        int p = 0;
        for (int j = 0; j < n; j++)
        {
            stk.push(inque[j]);
            while (stk.top() == outque[p])
            {
                p++;
                stk.pop();
                if (stk.empty())
                    break;
            }
        }
        if (stk.empty())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
            while (!stk.empty()) // 清空栈，要不会影响下一个情况的判断
                stk.pop();
        }
    }
    return 0;
}