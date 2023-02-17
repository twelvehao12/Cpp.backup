#include <bits/stdc++.h>
using namespace std;

struct card
{
    char suit;
    int value;
};

void bubble(struct card a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= i + 1; j--)
        {
            if (a[j].value < a[j - 1].value)
            {
                card t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }
}

void selection(struct card a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minj = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j].value < a[minj].value)
            {
                minj = j;
            }
        }
        card t = a[i];
        a[i] = a[minj];
        a[minj] = t;
    }
}

void print(struct card a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            cout << ' ';
        }
        cout << a[i].suit << a[i].value;
    }
    cout << endl;
}

bool isStable(struct card c1[], struct card c2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (c1[i].suit != c2[i].suit)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    card c1[100], c2[100];
    int n;
    char ch;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c1[i].suit >> c1[i].value;
    }
    for (int i = 0; i < n; i++)
    {
        c2[i] = c1[i];
    }

    bubble(c1, n);
    selection(c2, n);
    // sort(c2, c2 + n - 1);

    print(c1, n);
    cout << "Stable" << endl;

    print(c2, n);
    if (isStable(c1, c2, n))
    {
        cout << "Stable" << endl;
    }
    else
    {
        cout << "Not stable" << endl;
    }
    return 0;
}

//----------------------------自己打的（有错误没改）-----------------------------
// void cardInitCopy(struct card original[], struct card init[], int n)
// { // 复制初始化init
//     for (int i = 0; i < n; i++)
//     {
//         init[i] = original[i];
//     }
// }

// // void cardSwap(struct card &a, struct card &b)
// // {
// //     card tmp = a;
// //     a = b;
// //     b = tmp;
// // }

// void bubbleSortCard(struct card a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n - 1; j > i; j--)
//         {
//             if (a[j].value < a[j - 1].value)
//             {
//                 // 交换
//                 card t = a[j];
//                 a[j] = a[j - 1];
//                 a[j - 1] = t;
//             }
//         }
//     }
// }

// void selectionSortCard(struct card a[], int n)
// {
//     int minj;
//     for (int i = 0; i < n; i++)
//     {
//         minj = i;
//         for (int j = n - 1; j > i; j--)
//         {
//             if (a[j].value < a[minj].value)
//             {
//                 minj = j;
//             }
//         }
//         // 交换
//         card t = a[i];
//         a[i] = a[minj];
//         a[minj] = t;
//     }
// }

// bool isStableSlow(const struct card a[], const struct card b[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = 0; k < n; k++)
//             {
//                 for (int l = k + 1; l < n; l++)
//                 {
//                     if (a[i].value == a[j].value && a[i].suit == b[l].suit && a[j].value == b[k].value)
//                     {
//                         return false;
//                     }
//                 }
//             }
//         }
//     }
//     return true;
// }

// bool isStableFast(const struct card a[], const struct card b[], int n)
// {
// }

// void printCard(const struct card a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].suit << a[i].value << ' ';
//     }
//     cout << endl;
// }

// // void printStable(bool a)
// // {
// //     if(a)
// //     {
// //         cout << "Stable";
// //     }
// //     else{
// //         cout << "Not stable";
// //     }
// //     // cout << a ? "Stable" : "Not stable"<<endl;
// // }

// int main()
// {
//     int n;
//     cin >> n;
//     // 输入
//     card a[100 + 10];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].suit >> a[i].value;
//     }
//     // 初始化结构体
//     card bubble_sort_a[100 + 10], selection_sort_a[100 + 10];
//     cardInitCopy(a, bubble_sort_a, n);
//     cardInitCopy(a, selection_sort_a, n);
//     // 排序
//     bubbleSortCard(bubble_sort_a, n);
//     selectionSortCard(selection_sort_a, n);
//     // 判断是否为稳定排序
//     bool bubble_stable = isStableSlow(a, bubble_sort_a, n);
//     bool selection_stable = isStableSlow(a, selection_sort_a, n);
//     // bool bubble_stable = isStableFast(a, bubble_sort_a, n);
//     // bool selection_stable = isStableFast(a, selection_sort_a, n);
//     // 输出
//     // printCard(bubble_sort_a, n);
//     // printStable(bubble_stable);
//     // printCard(selection_sort_a, n);
//     // printStable(bubble_stable);
// }