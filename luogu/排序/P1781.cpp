#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

struct part
{
    int idx;
    // ll vote;     # 数据最高有一百位 只能用string存
    string vote;
};

part pats[20 + 5];

bool cmp(part a, part b)
{
    if(a.vote.size()==b.vote.size())
        return a.vote < b.vote;
    else
        return a.vote.size() < b.vote.size();
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> pats[i].vote;
        pats[i].idx = i;
    }
    sort(pats, pats + n, cmp);
    cout << pats[n - 1].idx + 1 << endl;
    cout << pats[n - 1].vote << endl;
}