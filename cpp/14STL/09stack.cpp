#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    s.push(2);  //push the element at the top.
    s.push(3);
    s.push(4);
    while (!s.empty())  //s.empty() returns a boolean value
    {
        cout << s.top() << endl;    //s.top() returns the value at top.
        s.pop(); //pop the element from the top.
    }
    
    return 0;
}