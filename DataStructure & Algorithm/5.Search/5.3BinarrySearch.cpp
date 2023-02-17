#include <bits/stdc++.h>
using namespace std;

int s[100000 + 10];
int binarySearch(int s[], int n, int key)
{
    int head, tail;
    head = 0;
    tail = n;
    int mid = (head + tail) / 2;
    while (head < tail)
    {
        mid = (head + tail) / 2;
        if (s[mid] == key)
        {
            return mid;
        }
        else if (s[mid] > key)
        {
            tail = mid;
        }
        else if (s[mid] < key)
        {
            head = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s, s + n);
    int q;
    cin >> q;
    int cnt = 0;
    for (int i = 0; i < q; i++)
    {
        int key;
        cin >> key;
        if (binarySearch(s, n, key) != -1)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}