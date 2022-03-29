// Depth First Search

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    vis[vertex] = true;
    for(int child : g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    } 
}                                                                                                                                                    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    
    
    return 0;
}