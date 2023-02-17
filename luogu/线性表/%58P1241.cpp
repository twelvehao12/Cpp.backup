#include <bits/stdc++.h>
using namespace std;

string str;
stack<pair<int,char>> s;

int main(){
    cin >> str;
    for (int i = 0; i < str.size();i++){
        if(str[i]=='('||str[i]=='['){
            s.push(make_pair(i,str[i]));
        }
        else if (str[i] == ')'){
            if(s.top().second=='('){
                s.pop();
            }else{
                str.insert(i, 1, '(');
                i++;
            }
        }
        else if (str[i] == ']')
        {
            if (s.top().second == '[')
            {
                s.pop();
            }
            else
            {
                str.insert(i, 1, '[');
                i++;
            }
        }
    }
    while(!s.empty()){
        if(s.top().first==str.size()){
            str.append(1, s.top().second == '(' ? ')' : ']');
        }
        else
        {
            str.insert(s.top().first + 1, 1, s.top().second == '(' ? ')' : ']');
        }
        // str.insert(s.top().first + 1, 1, s.top().second == '(' ? ')' : ']');
        s.pop();
    }
    cout << str << endl;
    return 0;
}