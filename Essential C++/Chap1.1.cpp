#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}

void insertionSort(int a[], int n)
{
    printArray(a, n);
    for (int i = 1; i < n; i++)
    {
        int v = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > v)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
        printArray(a, n);
    }
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
    insertionSort(a, n);
}