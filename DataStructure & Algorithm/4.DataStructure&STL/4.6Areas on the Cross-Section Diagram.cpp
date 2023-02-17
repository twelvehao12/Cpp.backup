#include<bits/stdc++.h>
using namespace std;

int main(){
    char str, prev;
    stack<int> stk;
    int sum, i = 0, tmp = 0;
    stack<pair<int, int>> ps;

    for (int i = 0; cin >> str;i++)
    {
        if(str=='\\'){
            stk.push(i);
        }else if(str=='/'&&!stk.empty()){
            tmp = stk.top();
            sum += i - tmp;
            stk.pop();

            int a = i - tmp;
            while(!ps.empty()&&ps.top().first>tmp){     // 水位上移，原来ps存储的最左侧的‘\’要更新成更加左侧的‘\’
                a += ps.top().second;       // 面积暂存在变量a中
                ps.pop();       // 删除原来的ps.top()
            }
            ps.push(make_pair(tmp, a));     // 更新ps.top()
        }
        // -------自己写烂尾的思路--------
        // if(prev!='\\'&&str=='\\'){
        //     ps.push(make_pair(i, 0));
        // }else if(str=='/'){
        //     ps.top().second = i - tmp;
        // }
        // prev = str;
    }

    vector<int> ans;
    while(!ps.empty()){
        ans.push_back(ps.top().second);     // 把元素从ps中取出
        ps.pop();
    }
    reverse(ans.begin(), ans.end());    // ps中的元素是反的，要reverse一下

    cout << sum << endl;
    cout << ans.size() << ' ';
    for (vector<int>::iterator it = ans.begin(); it != ans.end();it++){
        cout << *it << ' ';
    }
    cout << endl;
    return 0;
}