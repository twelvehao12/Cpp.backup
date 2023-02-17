#include <bits/stdc++.h>
using namespace std;
#define M 1000000 + 10
typedef long long ll;

struct comp
{
    ll start, end;
};

ll n, cnt = 0;
comp cs[M];
/**************************************************************************************
 *    题解改进思路：
 *        个人的想法比较直白，只需要先将每一场比赛以结束时间排一次序，得到一个顺序的结构体数组，
 *        存储最前面一节课的下课时间，然后以结束时间为准，在这相同结束时间比赛中下，如果有比赛的
 *        开始时间小于等于记录的结束时间，直接参加比赛，然后计数，最后输出总次数就可以了。
 ***************************************************************************************/

bool cmp(comp a, comp b)
{
    return a.end < b.end;
}

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> cs[i].start >> cs[i].end;
    }
    sort(cs, cs + n, cmp);
    ll e = 0;
    for (ll i = 0; i < n; i++)
    {
        if (cs[i].start >= e)
        {
            cnt++;
            e = cs[i].end;
        }
    }
    cout << cnt << endl;
}

// 原来的思路
// bool occupied[M];

// bool cmp(comp a, comp b)
// {
//     return a.dt < b.dt;
// }

// int solve()
// {
//     for (int i = 1; i <= n; i++)
//     {
//         bool is_free;
//         for (int j = cs[i].s; j < cs[i].e; j++)
//         {
//             if (occupied[j] == 1)
//             {
//                 is_free = 0;
//                 break;
//             }
//             is_free = 1;
//         }
//         if (is_free)
//         {
//             cnt++;
//             for (int j = cs[i].s; j < cs[i].e;j++){
//                 occupied[j] = 1;
//             }
//         }
//     }
//     return cnt;
// }

// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> cs[i].s >> cs[i].e;
//         cs[i].dt = cs[i].e - cs[i].s;
//     }

//     sort(cs + 1, cs + 1 + n, cmp);

//     cout << solve() << endl;
// }