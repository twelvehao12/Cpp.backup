#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    int cnt = 0;
    for (int i = 0; i < h * w; i++)
    {
        char tmp;
        cin >> tmp;
        if (tmp == '#')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

// #define H 100000 + 10
// #define W 100000 + 10

// char str[H][W];

// int main()
// {
//     int h, w;
//     cin >> h >> w;
//     int cnt = 0;
//     for (int i = 0; i < h; i++)
//     {
//         for (int j = 0; j < w; j++)
//         {
//             cin >> str[i][j];
//             if (str[i][j] == '#')
//             {
//                 cnt++;
//             }
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }
