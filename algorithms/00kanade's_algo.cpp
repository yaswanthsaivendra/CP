//Kanade's algorithm
//Largest sum contiguous subarray.

#include<bits/stdc++.h>

using namespace std;


int maxSubArraySum(vector<int> &v){
    int max_so_far = INT_MIN;//keeps track of maximum continuous sum segment among all positive segments.
    int max_ending_here = 0;//keeps track of all positive segments

    for (int i = 0; i < v.size(); i++)
    {
        max_ending_here = max_ending_here + v[i];
        if (max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
        }
        
        if(max_ending_here<0) max_ending_here=0;
    }
    return max_so_far;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int n;
    cin>>n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int ans = maxSubArraySum(v);
    cout<<"Largest subarraysum: "<<ans;
    

    
    return 0;
}