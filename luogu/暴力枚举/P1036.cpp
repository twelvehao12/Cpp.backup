#include <bits/stdc++.h>
using namespace std;
#define M 20 + 5
typedef long long ll;

int n, k;
ll x[M];
int cnt = 0;

bool isPrime(ll a)
{
    // if(a==1||!a)
    //     return false;
    for (ll i = 2; i <= floor(sqrt(a)); i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

void dfs(int i, int num, int sum)
{
    if (num == k && isPrime(sum))
        cnt++;
    for (int j = i; j <= n; j++)
    {
        dfs(j + 1, num + 1, sum + x[j]);
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    dfs(1, 0, 0);
    cout << cnt << endl;
}