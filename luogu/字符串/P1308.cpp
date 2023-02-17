#include <bits/stdc++.h>
using namespace std;

string tofind;
string psg;

int main()
{
    cin >> tofind;
    for (int i = 0; i < tofind.size(); i++)
    {
        if (tofind[i] >= 65 && tofind[i] <= 90)
        {
            tofind[i] -= 32;
        }
    }
    int idx = 0, cnt = 0;
    bool flag = 0;
    while (cin >> psg)
    {
        for (int i = 0; i < psg.size(); i++)
        {
            if (psg[i] >= 65 && psg[i] <= 90)
            {
                psg[i] -= 32;
            }
        }
        if (tofind.compare(psg) == 0)
        {
            flag = 1;
            cnt++;
        }
        if (!flag)
            idx++;
    }
    if (!flag)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << cnt << ' ' << idx << endl;
    return 0;
}