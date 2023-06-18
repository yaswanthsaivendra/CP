// Depth First Search

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int vertex){
    // Take action on vertex after entering vertex
    current_cc.push_back(vertex);
    vis[vertex] = true;
    for(int child : g[vertex]){
        // Take action on child before entering the child 
        if(vis[child]) continue;
        dfs(child);
        //Take action on child after exiting the child node
    } 
    // Take action on vertex before exiting the vertex
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

    //if we want to calculate no. of connected components in a forest.
    //(usually one dfs call visits all nodes of one connected component, so n dfs calls means n connected components)
    int cnt_of_cc = 0;
    for(int i=0; i<n; i++) {
        if(vis[i]) continue;
        cnt_of_cc++;
        current_cc.clear();
        dfs(i); 
        cc.push_back(current_cc);
    }

    return 0;
}