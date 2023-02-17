#include <bits/stdc++.h>
using namespace std;

int w[100000 + 10];
int n, k;

bool checkValidP(long long p)
{
    int now = 0, cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (now + w[i] > p)
        {
            cnt++;
            now = w[i];
        }
        else
        {
            now += w[i];
        }
    }
    return cnt <= k;
}

int getMinP()
{
    long long l = 0, r = 100000000000;
    long long mid;
    while (l < r)
    {
        mid = (l + r) >> 1;     //除以2，位运算是左移一位！！！！！不要打成>>2了！！！！
        if (checkValidP(mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    cout << getMinP() << endl;
    return 0;
}