#include <bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int chinese;
    int math;
    int english;
    int total;
    int id;
};

bool cmp(student a, student b)
{
    if (a.total < b.total)
    {
        return true;
    }
    else if (a.total == b.total)
    {
        return a.id > b.id;
    }
    return false;
}

void printStudent(student a)
{
    cout << a.name << ' ' << a.chinese << ' ' << a.math << ' ' << a.english << endl;
}

int main()
{
    int n;
    cin >> n;
    student stu[1000 + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].name >> stu[i].chinese >> stu[i].math >> stu[i].english;
        stu[i].total = stu[i].chinese + stu[i].math + stu[i].english;
        stu[i].id = i;
    }

    sort(stu, stu + n, cmp);

    printStudent(stu[n - 1]);
}