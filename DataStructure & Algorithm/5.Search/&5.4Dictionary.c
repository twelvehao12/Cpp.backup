#include <stdio.h>
#include <string.h>
#define M 1000000 + 10
#define L 14

char Hash[M][L];

int getNum(char ch)
{
    if (ch == 'A')
        return 1;
    else if (ch == 'B')
        return 2;
    else if (ch == 'C')
        return 3;
    else if (ch == 'D')
        return 4;
    return 0;
}

long long getKey(char str[])
{
    long long sum = 0, p = 1;
    for (int i = 0; i < strlen(str); i++)
    {
        sum += p * getNum(str[i]);
        p *= 5;
    }
    return sum;
}

int h1(int key)
{
    return key % M;
}

int h2(int key)
{
    return 1 + (key % M - 1);
}

int Find(char str[])
{
    long long key;
    key = getKey(str);
    int index;
    for (int i = 0;; i++)
    {
        index = (h1(key) + i * h2(key)) % M;
        if (strcmp(Hash[index], str) == 0)
        {
            return 1;
        }
        else if (strlen(Hash[index]) == 0)
        {
            return 0; // 直接return了？？？   证明还没被存过 后面也没有了
        }
    }
    return 0;
}

int Insert(char str[])
{
    long long key;
    int index;
    key = getKey(str);
    for (int i = 0;; i++)
    {
        index = (h1(key) + i * h2(key)) % M;
        if (strcmp(Hash[index], str) == 0)
        {
            return 1;
        }
        else if (strlen(Hash[index]) == 0)
        {
            strcpy(Hash[M], str);
            return 0;
        }
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    char str[14], com[9];
    for (int i = 0; i < M; i++)
    {
        Hash[i][0] = '\0';
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", com, str);
        if (com[0] == 'i')
        {
            Insert(str);
        }
        else if (com[0] == 'f')
        {
            if (Find(str))
            {
                printf("yes\n");
            }
            else if (!Find(str))
                (printf("no\n"));
        }
    }
    return 0;
}