#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

/*
all_of
any_of
none_of
These algos will take a lambda function as argument as condition.
These algos return a boolean value True or False.
*/
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi v = {2, 4, 6, 0};
    cout << all_of(v.begin(), v.end(),[](int x){return x>0;})<<"\n";
    cout << any_of(v.begin(), v.end(),[](int x){return x>0;})<<"\n";
    cout << none_of(v.begin(), v.end(),[](int x){return x>0;})<<"\n";
    return 0;
}