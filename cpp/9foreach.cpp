//For each loop in cpp
//it will only work on collection of data


#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[10]={0,1,2,3,4,5,6,7,8,9};  
    for(int x:arr){ //we read it as "for each x in arr."
        cout<<x<<"\n";  //here x refers to the values in arr, not the index.
    }
    cout<<"\n\n";
    for (int x : arr) //here in each iteration x gets the copy of the value in the array. so, even if we do ++x the original values in the array aren't changed
    {                      
        cout << ++x << "\n";   
    }
    cout << "\n\n";
    cout << "original array:\n";

    for (int x : arr)
    {                      
        cout << x << "\n"; 
    }
    cout << "\n\n";

    for (int &x : arr) //if we want to change the actual values in array, we can use references for that.
    {
        cout << ++x << "\n";
    }
    cout << "\n\n";
    cout << "original array:\n";

    for (int x : arr)
    {                      
        cout << x << "\n"; 
    }
    return 0;
}
