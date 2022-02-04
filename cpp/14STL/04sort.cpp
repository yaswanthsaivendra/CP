// sort()
// sort an array or vector or a string.
//O(NlogN) - its the most efficient hydrid sorting algorithm

//usage :

#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    // for array
    int n = 20;
    int arr[n];
    sort(arr, arr + n); //sort(pointer_to_first_element, pointer_to_last_next_element)

    //for vector
    vector<int> v;
    sort(v.begin(), v.end());
    //v.end() is the iterator to a non-existent element(after the last element).

    // for string 
    string s;
    sort(s.begin(), s.end());

    return 0;
}

