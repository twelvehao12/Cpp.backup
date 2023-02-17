#include <bits/stdc++.h>
using namespace std;

void mySwap(int &a, int &b, int &cnt)
{
    int tmp = a;
    a = b;
    b = tmp;
    cnt++;
}

void selectionSort(int a[], int n, int &cnt)
{
    int minj;
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        minj = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[minj])
            {
                minj = j;
            }
        }
        if(minj!=i){
            mySwap(a[i], a[minj], cnt);
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
    selectionSort(a, n, cntSwap);
    printArray(a, n);
    cout << cntSwap;
}