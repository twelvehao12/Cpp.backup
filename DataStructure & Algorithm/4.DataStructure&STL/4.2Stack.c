#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 逆波兰表示法用栈实现

int top, stack[1000];

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    top--;
    return stack[top + 1];
}

int main()
{
    int a, b;
    top = 0;
    char str[100];

    while (scanf("%s", str) != EOF)
    {
        if (str[0] == '+')
        {
            a = pop();
            b = pop();
            push(a + b);
        }
        else if (str[0] == '-')
        {
            a = pop();
            b = pop();
            push(b - a);
        }
        else if (str[0] == '*')
        {
            a = pop();
            b = pop();
            push(a * b);
        }
        else
        {
            push(atoi(str));    // atoi()可以将str中的数字转换为int类型(stdlib.h)
        }
    }

    printf("%d\n", pop());

    return 0;
}