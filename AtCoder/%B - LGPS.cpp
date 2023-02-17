// B - Let's Get a Perfect Score
#include <bits/stdc++.h>
using namespace std;

char s[35][35];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            bool flag = 1;
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == 'x' && s[k][j] == 'x')
                    flag = 0;
            }
            if (flag)
                cnt++;
        }
    }
    cout << cnt << endl;
}

// int s[30 + 5][30 + 5];

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             char tmp;
//             cin >> tmp;
//             if (tmp == 'o')
//                 s[i][j] = 1;
//             else if (tmp == 'x')
//                 s[i][j] = 0;
//         }
//     }
//     int cnt = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool tmp;
//         for (int j = 0; j < m; j++)
//         {
//             tmp = (s[i][j] || s[i + 1][j]);
//             if (!tmp)
//                 break;
//             else if (tmp && (j == m - 1))
//                 cnt++;
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }