#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> v{1,2,3,4};

    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout<<*i<<"\n";
    }
    
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<"\n";
    }
    
    for(int &i:v){
        cout<<i<<"\n";
    }

    

    return 0;
}