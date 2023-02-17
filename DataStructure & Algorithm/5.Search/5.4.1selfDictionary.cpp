#include <bits/stdc++.h>
using namespace std;

char table[12 + 5][1000000 + 10];

int Hash(int a, int m)
{
    return a % m;
}

int insert(char x[], int m)
{
    int sum = 0;
    int i = 0;
    while (x[i] != '\n')
    {
        sum += (int)x[i];
        i++;
    }
    int h = Hash(sum, m);
    for (i = 0; i < strlen(x); i++)
    {
        if (!table[i][h])
        {
            table[i][h] = x[i];
        }
        else if (table[i][h])
        {
            while (table[i][h])
            {
                if (h == m)
                {
                    h = 0;
                    continue;
                }
                h++;
            }
        }
    }
    return h;
}

int main()
{
    int n;
    cin >> n;
    char cmd[6 + 5], x[12 + 5];
    for (int i = 0; i < n;i++){
        scanf("%s %s", cmd, x);
        if(cmd[0]=='i'){
            insert(x, n);
        }
    }
}