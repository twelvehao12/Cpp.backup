#include <bits/stdc++.h>
using namespace std;

list<int> que;

int main()
{
    int m, n;
    cin >> m >> n;
    int tmp, cnt = 0;
    while (cin >> tmp)
    {
        if (find(que.begin(), que.end(), tmp) == que.end())
        {
            cnt++;
            que.push_back(tmp);
        }
        if (que.size() > m)
        {
            que.pop_front();
        }
    }
    cout << cnt;
    return 0;
}

// list<int> que;

// bool find(list<int> que, int tmp)
// {
//     for (list<int>::iterator it = que.begin(); it != que.end(); it++)
//     {
//         if (*it == tmp)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int cnt = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         int tmp;
//         if (i <= m)
//         {
//             cin >> tmp;
//             if (!find(que, tmp))
//             {
//                 cnt++;
//             }
//             que.push_back(tmp);
//         }
//         else if (i > m)
//         {
//             cin >> tmp;
//             if (!find(que, tmp))
//             {
//                 cnt++;
//             }
//             que.push_back(tmp);
//             que.pop_front();
//         }
//     }

//     cout << cnt;
//     return 0;
// }