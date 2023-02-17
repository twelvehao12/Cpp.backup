#include <bits/stdc++.h>
using namespace std;

string str, tmp;

int main()
{
    cin >> str;
    char sign;
    for (string::iterator i = str.begin(); i != str.end(); i++)
    {
        if (*i == '.' || *i == '/')
        {
            char sign = *i;
            tmp.assign(i + 1, str.end());
            int temp = stoi(tmp);
            tmp.clear();
            tmp = to_string(temp);
            str.erase(i, str.end());
            reverse(str.begin(), str.end());
            reverse(tmp.begin(), tmp.end());
            // str += sign;
            // str += tmp;
            // cout << str << endl;
            cout << stoi(str) << sign << stoi(tmp) << endl;
            return 0;
        }
    }
    if (str.back() == '%')
    {
        reverse(str.begin(), str.end());
        cout << stoi(str) << '%' << endl;
        return 0;
    }
    reverse(str.begin(), str.end());
    cout << stoi(str) << endl;
    return 0;
}