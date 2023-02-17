#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
    char name[100];
    int t;
} p;

p q[LEN];
int head, tail, n;

void enqueue(p x){
    q[tail] = x;
    tail = (tail + 1) % LEN; // 队未满为tail++;队满为0
}

p dequeue(){
    p x = q[head];
    head = (head + 1) % LEN;//同tail的注释
    return x;
}

int min(int a,int b){
    return a < b ? a : b;
}

int main(){
    int elaps = 0, c;
    int i, q_;// q_为小写的q
    p u;    // 正在处理的进程
    scanf("%d %d", &n, &q_);

    for (int i = 1; i <= n;i++){
        scanf("%s", q[i].name);
        scanf("%d", &q[i].t);
    }
    head = 1;
    tail = n + 1;

    while (head!=tail)
    {
        u = dequeue();
        c = min(q_, u.t);
        u.t -= c;
        elaps += c;
        if(u.t>0){
            enqueue(u); // 如果还需要时长就重新入队
        }else{
            printf("%s %d\n", u.name, elaps);
        }
    }
    
    return 0;
}