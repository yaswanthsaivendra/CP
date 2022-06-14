//binary search     can be used in case of sorted arrays to search quickly.
#include<iostream>

using namespace std;


int main(){
    int n, e;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l=0,h=n-1,mid;
    cout << "enter the value of element u want to search for: ";
    cin >> e;
    while (l<=h)
    {
        mid=(l+h)/2;
        if (arr[mid]==e)
        {
            cout<<"element '"<<e<<"' found at index "<<mid;
            return 0;
        }
        else if(arr[mid]>e)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
        cout << l << "\t"<<h<<"\n";
    }
    cout<<"element '"<<e<<"' not found";
    return 0;
}