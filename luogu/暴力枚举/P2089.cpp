#include <bits/stdc++.h>
using namespace std;
#define rep(x) for (int x = 1; x <= 3; x++)

int n, cnt = 0;
struct p
{
    int a, b, c, d, e, f, g, h, i, j;
};
queue<p> pe;

void solve()
{
    rep(a) rep(b) rep(c) rep(d) rep(e) rep(f) rep(g) rep(h) rep(i) rep(j)
    {
        if (a + b + c + d + e + f + g + h + i + j == n)
        {
            pe.push((p){a, b, c, d, e, f, g, h, i, j});
            cnt++;
        }
    }
}

int main()
{
    cin >> n;
    solve();
    cout << pe.size() << endl;
    while (!pe.empty())
    {
        p tmp = pe.front();
        pe.pop();
        cout << tmp.a << ' ' << tmp.b << ' ' << tmp.c << ' ' << tmp.d << ' ' << tmp.e << ' ' << tmp.f << ' ' << tmp.g << ' ' << tmp.h << ' ' << tmp.i << ' ' << tmp.j << endl;
    }
    return 0;
}