// #include<cstdio>
// #include<cstdlib>
// #include<cstring>
#include <bits/stdc++.h>

struct Node
{
    int key;
    Node *prev, *next;
};

Node *nil; // NIL=NULL; 这里的nil指的是第一个空节点

void init()
{
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void printList()
{
    Node *cur = nil->next;
    int idx = 0;
    while (cur!=nil)
    {
        if (cur == nil)
        {
            break;
        }
        if (idx++ > 0)
        {
            printf(" ");
        }
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

void deleteNode(Node *t)
{
    if (t == nil)
    {
        return;
    }
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst()
{
    deleteNode(nil->next);
}

void deleteLast()
{
    deleteNode(nil->prev);
}

Node *listSearch(int key)
{
    Node *cur = nil->next;
    while (cur != nil && cur->key != key)
    { // 还可以改进成如果遍历完仍然找不到，返回NULL
        cur = cur->next;
    }
    return cur;
}

void deleteKey(int key)
{
    deleteNode(listSearch(key));
}

void insert(int key)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = nil->next;
    nil->next->prev = newNode;
    newNode->prev = nil;
}

int main()
{
    int key, n, i;
    int size = 0;
    char com[20];
    int np = 0, nd = 0; // np: 插入元素的次数; nd: 删除元素的次数
    scanf("%d", &n);
    init();

    for (int i = 0; i < n; i++)
    {
        scanf("%s%d", com, &key);
        if (com[0] == 'i')
        {
            insert(key);
            np++;
            size++;
        }
        else if (com[0] == 'd')
        {
            if (strlen(com) > 6)
            {
                if (com[6] == 'F')
                {
                    deleteFirst();
                }
                else if (com[6] == 'L')
                {
                    deleteLast();
                }
            }
            else
            {
                deleteKey(key);
                nd++;
            }
            size--;
        }
    }

    printList();
    return 0;
}