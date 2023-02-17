#include<bits/stdc++.h>
using namespace std;

int a[100000 + 10];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int i, k;
        cin >> i >> k;
        if (i == 1){
            int x;
            cin >> x;
            a[k] = x;
        }else if(i==2){
            cout << a[k] << endl;
        }
    }
    return 0;
}