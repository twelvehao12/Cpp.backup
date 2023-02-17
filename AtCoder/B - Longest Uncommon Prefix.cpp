#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    int n;
    cin >> n >> s;
    for (int i = 1; i < n; i++)
    {
        int l = 0;
        for (l = 0; l + i <= n; l++)
        {
            if (s[l] == s[l + i])
            {
                l++;
                break;
            }
        }
        cout << --l << endl;
    }
}