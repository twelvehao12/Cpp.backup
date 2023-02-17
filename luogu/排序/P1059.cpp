#include <bits/stdc++.h>
using namespace std;

int main()
{
    // srand((int)time(NULL));
    int n;
    cin >> n;
    int ran[100 + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> ran[i];
    }

    sort(ran, ran + n);
    int cnt = n;
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && ran[i] == ran[i - 1])
        {
            cnt--;
        }
    }

    cout << cnt << endl;
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && ran[i] == ran[i - 1])
        {
            continue;
        }
        cout << ran[i] << ' ';
    }
    return 0;
}