#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int,int>> v{{1,2},{3,4}};
    v.push_back({5, 6});
    v.push_back(make_pair(7,8));
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    
    
    

    return 0;
}