//check whether a number is power of 2 or not.
#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(n & (n-1) == 0) cout << "true";
    else cout<<"false";
    return 0;
}