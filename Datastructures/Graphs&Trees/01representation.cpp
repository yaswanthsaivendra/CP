//Graphs/Trees can be represented by 
//1. Adjacency Matrix
//2. Adjacency List
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph1[N][N];

vector<int> graph2[N];

int graph3[N][N];
vector<pair<int,int>> graph4[N];

int main(){
    int n, m;
    cin>>n>>m;
    //While giving input for Graph/Trees, Usually
    //First line consists of 2 integers n(no. of vertices), m(no. of edges)
    //Then there will be m lines, each line consists of two integers represeting the vertices with connected edges(with an optional third integer representing weights)
    //Ex:
    /*
    6 9         //n m
    1 3 4       //v1 v2 wt
    1 5 3
    3 5 2
    3 4 7
    3 6 8
    3 2 9
    2 6 1
    4 6 2
    5 6 3
    */
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin>>v1>>v2;
        // 1.Adjacency Matrix
        graph1[v1][v2] = 1;
        graph1[v2][v1]= 1;   //this is a non-directional graph

        // 2. Adjacency List
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);


        // If weights are given ==>
        int wt; cin>>wt;
        //Adjacency Matrix
        graph3[v1][v2] = wt;
        graph3[v2][v1] = wt;

        //Adjacency List
        graph4[v1].push_back({v2, wt});
        graph4[v2].push_back({v1, wt}); 

    }

    //1. Adjacency Matrix
    // In this adacency matrix, Space complexity is too high
    // O(N^2) -- space complexity, If N>10^5 we cannot use this method, because we cannot define a 10^5*10^5 matrix.
    //Useful When:
    // To know if i,j connected??
    // To know wt of i,j
    // These will take O(1) time complexity here whereas o(n) in Adjacecny List. 


    //2. Adjacency List
    // O(N + M)
    // N = 10^5 , E < 10^7
    //Low space complexity, compared to Adjacency Matrix.
    return  0;
}