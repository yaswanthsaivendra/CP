// //Reference variables
// //these can be used to call a single variable with different names.
// //reference is a alias of variable
// //it must be intialised when declared.
// //it cannot be modified to refer other variable.
// #include<iostream>

// using namespace std;


// int main(){
//     int x = 45;
//     int &y = x; //here y points to the same variable.
//     //here y is not consuming any extra memory, here we are using the two different names for a single variable.
//     cout << x << endl;
//     cout << y << endl;
//     return 0;
// }



#include<bits/stdc++.h>

using namespace std;


int func(int arr1[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << ++arr1[i];
    }
    
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n=10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    func(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"";
    }

    return 0;
}