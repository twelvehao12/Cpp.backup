#include <bits/stdc++.h>
using namespace std;

string str;

int main()
{
    int n;
    cin >> n;
    cin >> str;
    // string::iterator it = str.begin();
    for (int i = 0; i < n; i++)
    {
        // it++;
        if (str[i] == 'n' && str[i + 1] == 'a')
        {
            // str.insert(it, 'y');
            cout << "ny";
        }
        else
        {
            cout << str[i];
        }
    }
    cout << endl;
    // cout << str << endl;
    return 0;
}