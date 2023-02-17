#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    printVector(v);
    vector<int>::iterator it = v.begin();
    *it = 3;
    it++;
    (*it)++;
    printVector(v);
    return 0;
}