// Sliding Window Technique
// This technique shows how a nested for loop in some problems can be converted to use single for loop to reduce time complexity.

// O(n) solution for finding maximum sum of
// a subarray of size k
#include <bits/stdc++.h>

using namespace std;

int maxSum(vector<int> &v, int n, int k){

    // k must be smaller than n.
    if(k>n){
        cout<<"Invalid";
        return -1;
    }

    //compute sum of first window.
    int max_sum = 0; //max_sum keep track of maximum sum.
    for (int i = 0; i < k; i++)
    max_sum+=v[i];

    // Compute sums of remaining windows by removing first element
    // of previous window and adding last element of current window.
    int window_sum = max_sum; //window_sum keep track of current window sum.
    for (int i = k; i < n; i++)
    {
        window_sum+=v[i]-v[i-k];
        max_sum= max(window_sum, max_sum);
    }
    
    return max_sum;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int n, k;// n - total no. of elements, k - no. of elements for finding sum.
    cin>>k>>n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    
    int ans = maxSum(v, n , k);
    cout<<"maximum sum of subarray of k elements: "<<ans;

    return 0;
}