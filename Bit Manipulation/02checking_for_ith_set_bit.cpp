//checking whether a bit at particular index is set or not.

#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i;//number , index
    cin>>n>>i;
    int f =1;
    f = f << i;
    if((n&f) == 0) cout<<"false\n";
    else cout<<"true\n";

    

    return 0;
}