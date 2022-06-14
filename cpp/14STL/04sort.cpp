// sort()
// sort an array or vector or a string.
//O(NlogN) - its the most efficient hydrid sorting algorithm

//usage :

#include<bits/stdc++.h>
#include <vector>

using namespace std;

//comparator function
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}

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

    //we can change the default behaviour of sort function by using a comparator function as third argument.
    vector<pair<int,int>> vp{{1,2},{6,5},{3,4},{4,5},{3,5},{6,2}};
    sort(vp.begin(), vp.end(), cmp);
    //now this cmp function sorts these pairs as increasing order of first elements and if they are equal it gives decreasing order of second elements.
    for (int i = 0; i < vp.size(); i++)
    {
        cout<< vp[i].first <<" "<< vp[i].second<<"\n";
    }

    return 0;
}

