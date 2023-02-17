#include <bits/stdc++.h>
using namespace std;

struct competitor
{
    int id;
    int grade;
};

bool cmp(competitor a, competitor b)
{
    if(a.grade==b.grade){
        return a.id < b.id;
    }
    return a.grade > b.grade;
}

int main()
{
    int n, m;
    cin >> n >> m;
    competitor comp[5000 + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> comp[i].id >> comp[i].grade;
    }

    sort(comp, comp + n, cmp);
    m=floor(m*1.5);
    int line,num=m;
    line = comp[m - 1].grade;
    for (int i = m; i < n; i++)
    {
        if (comp[i].grade == line)
        {
            num+=1;
        }
        else
        {
            break;
        }
    }

    cout << line << ' ' << num << endl;
    for (int i = 0; i < num; i++)
    {
        cout << comp[i].id << ' ' << comp[i].grade << endl;
    }
}