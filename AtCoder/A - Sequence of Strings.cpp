#include <bits/stdc++.h>
using namespace std;

stack<string> s;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.push(str);
    }
    for (int i = 0; i < n; i++)
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}