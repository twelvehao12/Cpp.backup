#include <bits/stdc++.h>
using namespace std;

struct student
{
    int id;
    int chinese;
    int math;
    int english;
    int total;
};

bool cmp(student a, student b)
{
    if (a.total == b.total)
    {
        if (a.chinese == b.chinese)
        {
            return a.id < b.id;
        }
        return a.chinese > b.chinese;
    }
    return a.total > b.total;
}

int main()
{
    int n;
    cin >> n;
    student stu[300 + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].chinese >> stu[i].math >> stu[i].english;
        stu[i].id = i + 1;
        stu[i].total = stu[i].chinese + stu[i].math + stu[i].english;
    }

    sort(stu, stu + n, cmp);

    for (int i = 0; i < 5; i++)
    {
        cout << stu[i].id << ' ' << stu[i].total << endl;
    }
}