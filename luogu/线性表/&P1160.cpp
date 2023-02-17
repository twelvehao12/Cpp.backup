#include<bits/stdc++.h>
using namespace std;

list<int> l;
list<int>::iterator pos[100000 + 10];   //减少搜索时间的方法：把每个元素的位置记录下来
bool trash[100000 + 10];

void listInit(){
    int n;
    scanf("%d", &n);
    l.push_back(1);
    pos[1] = l.begin();
    for (int i = 2; i <= n;i++){
        int k, p;
        scanf("%d %d", &k, &p);
        if(p){
            pos[i] = l.insert(++pos[k], i);
        }else if(!p){
            pos[i] = l.insert(pos[k], i);
        }
    }
}

int main(){
    listInit();

    int m;
    scanf("%d", &m);
    for (int i = 0; i < m;i++){
        int x;
        scanf("%d", &x);
        if(!trash[x]){
            l.erase(pos[x]);
            trash[x] = true;
        }
    }

    for (list<int>::iterator it = l.begin(); it != l.end();it++){
        printf("%d ", *it);
    }
}