//mergeSort
// Worst and Best time complexity : O(nlogn)

#include<iostream>
using namespace std;

void mergeSort(int arr[], int lb, int ub);
void merge(int arr[],int lb,int mid,int ub);

int main(){
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
    ub = length - 1;
    mergeSort(arr, lb, ub);

    //displaying sorted array.
    cout << "Sorted elements: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << '\t';
    }
    return 0;
}

void mergeSort(int arr[], int lb, int ub){
    int mid;
    if(lb<ub)
    {
        //finding the mid position.
        mid = lb + (ub-lb)/2;
        //dividing into two sub-arrays based on mid.
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid+1, ub);
        //merge those two sub-arrays.
        merge(arr, lb, mid, ub);
    }
}

void merge(int arr[], int lb, int mid, int ub){
    //a temporary array to store sorted array.
    int a[100];
    int i = lb; //i is the index of first sorted sub-array in this step.
    int j = mid + 1; //j is the index of second sorted sub-array in this step.
    int k = lb;      //k is the index of final merged sorted sub-array in this step(i.e., array a in our case).

    while (i<=mid && j<=ub)
    {
        if (arr[i]<= arr[j])
        {
            a[k]=arr[i];
            i++;
        }
        else
        {
            a[k]=arr[j];
            j++;
        }
        k++;
    }

    //if there were some elements left in second sub-array to be merged in this step.
    if (i>mid)
    {
        while (j<=ub)
        {
            a[k]=arr[j];
            j++;
            k++;
        }
        
    }
    //if there were some elements left in first sub-array to be merged in this step.
    else if (j>ub)
    {
        while (i <= mid)
        {
            a[k] = arr[i];
            i++;
            k++;
        }
    }

    //copying elements into original array
    for (int p = lb; p <= ub; p++)
    {
        arr[p]=a[p];
    }
}