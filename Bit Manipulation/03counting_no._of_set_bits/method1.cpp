//counting no. of set bits.
#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; // number 
    cin >> n ;
    int cnt=0;
    while (n)
    {
        if((n&1)!=0) cnt++;
        n = n>>1;
    }
    cout<<cnt;
    
    return 0;
}