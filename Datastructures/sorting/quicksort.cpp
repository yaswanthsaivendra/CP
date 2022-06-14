//QuickSort
//QuickSort is not stable - as it may change the relative position of equal elements while sorting.
/*
Worst Time complexity : O(n2)
Average and Best Time complexity : O(nlogn)
*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int lb, int ub);
void QuickSort(int arr[], int lb, int ub);

int main()
{
    int length, arr[100];
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    //Lower bound and upper bound
    int lb, ub;
    lb = 0;
    ub = length-1;

    QuickSort(arr, lb , ub);
    //displaying sorted array.
    cout << "Sorted elements: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << '\t';
    }

    return 0;
}

void QuickSort(int arr[], int lb, int ub){
    int loc;
    if (lb<ub)
    {
        loc = partition(arr, lb, ub);
        QuickSort(arr, lb, loc - 1);
        QuickSort(arr, loc+1, ub);
    }
    
}

int partition(int arr[], int lb, int ub){
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start<end)
    {
        while (arr[start]<=pivot)
        {
            start++;
        }

        while (arr[end] > pivot)
        {
            end--;
        }

        if (start<end)
        {
            swap(arr[start], arr[end]);
        } 
    }
    swap(arr[lb], arr[end]);
    return end;
    
}
