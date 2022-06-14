#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n);

int main()
{
    int n;
    cout<<"Enter n:"<<"\n";
    cin>>n;
    int arr[20];
    cout<<"Enter n elements: "<<"\n";
    for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }
    return 0;
}

//Function to sort the array using bubble sort algorithm.
void bubbleSort(int arr[], int n)
{
    // Your code here
    int temp;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;//we will make flag as 1 even if atleast one swap occurs in one complete inner loop iteration.
            }
        }
        //Even if one swap didnt occur in one complete iteration of inner for loop, it does mean that the array is already sorted So we break out of the loop.
        if (flag == 0)
        {
            break;
        }
    }
    
}