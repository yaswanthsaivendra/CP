// Insertion sort
/*
Worst Case Time Complexity [ Big-O ]: O(n2)

Best Case Time Complexity [Big-omega]: O(n)

Average Time Complexity [Big-theta]: O(n2)

Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

void insertionSort(int arr[], int length);


int main(){
    int length, arr[length];
    cout<<"Enter the number of elements: ";
    cin >> length;
    cout<< "Enter the elements: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, length);
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    
    
    return 0;
}

void insertionSort(int arr[], int length){
    int j,key;
    for (int i = 1; i < length; i++)
    {
        j = i;
        while (j>0 && arr[j]<arr[j-1])
        {
            key = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=key;
            j--;
        }   
    }
}
