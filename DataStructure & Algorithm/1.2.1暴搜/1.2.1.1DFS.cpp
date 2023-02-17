#include<bits/stdc++.h>
using namespace std;
#define M 20+5
typedef long long ll;

ll a[M];
ll n, k;

bool dfs(int i, ll sum){
    if(i==n)
        return sum == k;
    if(dfs(i+1,sum))
        return true;
    if(dfs(i+1,sum+a[i]))
        return true;
    return false;
}

int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cin >> k;
    string str = dfs(0, 0) ? "Yes" : "No";
    cout << str << endl;
}