#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int  n;
        int cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            if(t%2!=0)
                cnt++;
        }
        cout << cnt << endl;
    }
}