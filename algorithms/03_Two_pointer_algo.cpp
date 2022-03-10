// Two Pointer Algorithm.
// Two pointer technique is used for searching pairs in a sorted array.

//example : to find a pair of two values who sum is equal to x.

#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;



int isPairSum(vi &v, int x){
    int i=1; //represents first pointer
    int j=v.size()-1; //represents second pointer

    while (i<j)
    {
        //If we find a pair
        if(v[i]+v[j] == x) return 1;
        
        //If total sum is less, we move toward higher values by doing i++
        else if (v[i]+v[j] < x) i++;
        //If total sum is high, we move toward lower values by doing j--
        else j--;
    }
    return 0;
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi v{20,30,40,55,60,75,90};
    int x = 90;
    int ans = isPairSum(v,x);
    //ans=1 if pair is found, else 0.
    cout<<ans;
    return 0;
}