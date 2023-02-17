#include <bits/stdc++.h>
using namespace std;

// C-style pointer:

// void mySwap(int *a,int *b){
//     int tmp;
//     tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// cpp-style quote:

void mySwap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void bubbleSort(int a[], int n, int &cntSwap)
{
    bool flag = 1;
    cntSwap = 0;
    for (int i = 0; flag; i++)
    {
        flag = 0;
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                // mySwap(&a[j], &a[j - 1]);
                mySwap(a[j], a[j - 1]);
                flag = 1;
                cntSwap++;
            }
        }
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[100 + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cntSwap = 0;
    bubbleSort(a, n, cntSwap);
    printArray(a, n);
    cout << cntSwap << endl;
    return 0;
}