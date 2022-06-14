#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> s;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            s.push('(');
        }
        else if (str[i] == ')')
        {
            s.pop();
        }
    }
    if(s.empty())cout<<"Balanced";
    else cout<<"Unbalanced";
    return 0;
}