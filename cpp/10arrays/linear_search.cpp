//linear search
#include<bits/stdc++.h>

using namespace std;


int main(){
   
    int n,e;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value of element u want to search for: ";
    cin>>e;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==e){
            cout<<"element '"<<e<<"' found at index "<<i;
            return 0; 
        }
    }
    cout<<"element"<<e<<"not found";
    
    return 0;
}