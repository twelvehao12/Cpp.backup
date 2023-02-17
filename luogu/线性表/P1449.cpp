#include <bits/stdc++.h>
using namespace std;

stack<int> cul;

int main()
{
    char tmp;
    int octnum = 1;
    int sum = 0;
    while (cin >> tmp)
    {
        if (tmp == '.')
        {
            cul.push(sum);
            octnum = 1;
            sum = 0;
        }
        else if (tmp == '@')
        {
            cout << cul.top() << endl;
        }
        else if (tmp >= '0' && tmp <= '9')
        {
            sum *= 10;
            sum += atoi(&tmp);
        }
        else
        {
            if (tmp == '+')
            {
                int a, b;
                a = cul.top();
                cul.pop();
                b = cul.top();
                cul.pop();
                cul.push(a + b);
            }
            else if (tmp == '-')
            {
                int a, b;
                a = cul.top();
                cul.pop();
                b = cul.top();
                cul.pop();
                cul.push(b - a);
            }
            else if (tmp == '*')
            {
                int a, b;
                a = cul.top();
                cul.pop();
                b = cul.top();
                cul.pop();
                cul.push(a * b);
            }
            else if (tmp == '/')
            {
                int a, b;
                a = cul.top();
                cul.pop();
                b = cul.top();
                cul.pop();
                cul.push(b / a);
            }
        }
    }
}