#include<stdio.h>

int n, a[50];

int solve(int i,int m){
    if(m==0)
        return 1;
    if(i>=n)
        return 0;
    return solve(i + 1, m) || solve(i + 1, m - a[i]);
}

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q;i++){
        int m;
        scanf("%d", &m);
        printf("%s\n", solve(0, m) ? "Yes" : "No");
    }
    return 0;
}