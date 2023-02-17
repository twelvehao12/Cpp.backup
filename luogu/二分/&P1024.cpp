#include <bits/stdc++.h>
using namespace std;
#define eps 0.001

double a, b, c, d;
double root[3 + 5];

double func(double x)
{
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

bool check(double x,double y){
    return func(x) * func(y) < 0;
}

void solve(){
    double l = -100, r = 100;
    double mid;
    while (r - l > eps)
    {
        mid = (l + r) / 2;
        if(check(mid,r)){
            l = mid;
        }else{
            r = mid;
        }
    }
}

int main(){
    cin >> a >> b >> c >> d;
}