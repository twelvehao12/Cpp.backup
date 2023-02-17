#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> S;
    int a, b, x;
    string s;

    while (cin >> s)
    {
        if (s[0] == '+')
        {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a + b);
        }
        else if (s[0] == '-')
        {
            b = S.top();
            S.pop();
            a = S.top();
            S.pop();
            S.push(a - b);
        }
        else if (s[0] == '*')
        {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a * b);
        }
        else
        {
            S.push(atoi(s.c_str()));
        }
    }
    cout << S.top() << endl;

    return 0;
}

//-----------------------学习使用stack--------------------------
// int main()
// {
//     stack<int> s;

//     s.push(3);
//     s.push(7);
//     s.push(1);
//     cout << s.size() << ' ';

//     cout << s.top() << ' ';
//     s.pop();

//     cout << s.top() << ' ';
//     s.pop();

//     cout << s.top() << ' ';

//     s.push(5);
//     cout << s.top() << ' ';
//     s.pop();

//     cout << s.top() << endl;

//     return 0;
// }