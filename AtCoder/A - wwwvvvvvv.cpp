#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'w')
        {
            cnt += 2;
        }
        else if (str[i] == 'v')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}