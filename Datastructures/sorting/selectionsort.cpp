// Selection sort
/*
Average Time Complexity [Big-theta]: O(n2)

Space Complexity: O(1)
*/
#include<iostream>
using namespace std;

void selectionSort(int arr[], int length);


int main(){
    int length, arr[length];
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    
    selectionSort(arr, length);
    cout << "Sorted elements: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i]<<"\n";
    }

        return 0;
}

void selectionSort(int arr[], int length){
    for (int i = 0; i < length; i++)
    {
        int minIndex, minValue;
        minIndex = i;
        minValue = arr[i];
        for (int j = minIndex+1; j < length; j++)
        {
            if (arr[j]<minValue)
            {
                minValue = arr[j];
                minIndex = j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i] = minValue;
        arr[minIndex] = temp;
    }
    
}