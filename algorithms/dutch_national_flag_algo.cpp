// Dutch National Flag algorithm
// This algorithm can be implemented on an array with three unique elements.
//ex : sort the array of 0's, 1's and 2's.

#include<bits/stdc++.h>

using namespace std;

// take three pointers, low mid and high.
// low , mid point to the start of the array and high point to the end of the array.
// Three cases : 
// if v[mid] = 0    swap v[mid] and v[low] and increment both mid and low.
// if v[mid] = 1    increment mid by 1.
// if v[mid] = 2    swap v[mid] and v[high] and decrement high by 1.

void sort012(vector<int> &v){
    int low=0;
    int mid = 0;
    int high = v.size()-1;

    while(mid<=high){
        switch (v[mid])
        {
        case 0:
            swap(v[low++], v[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(v[mid], v[high--]);
            break;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    //sort the array.
    sort012(v);
    for(int &x:v){
        cout<<x<<" ";
    }

    return 0;
}