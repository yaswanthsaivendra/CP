#include<iostream>

using namespace std;


int main(){
    pair<int,string> p;
    p.first=3;
    p.second="yash";
    cout<<p.first<<" "<<p.second<<"\n";

    pair<int,string> p1{2,"anu"};
    cout <<p1.first << " " <<p1.second << "\n";

    pair<int, string> p2;
    p2=make_pair(1,"raj");
    cout << p2.first << " " << p2.second << "\n";

    return 0;
}