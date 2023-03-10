#include <bits/stdc++.h>
using namespace std;
#define N 2000 + 5

int n;
char s[N];

void solve()
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        bool slft = 0;
        for (int i = 0; left + i <= right; i++)
        {
            if (s[left + i] < s[right - i])
            { // 排除开头和末尾相同的情况
                slft = 1;
                break;
            }
            else
            {
                slft = 0;
                break;
            }
        }
        putchar(slft ? s[left++] : s[right--]); // 先输出再++/--
    }
    cout << endl;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    solve();
    return 0;
}