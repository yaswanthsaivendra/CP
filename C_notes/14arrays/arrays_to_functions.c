//passing arrays to functions.
#include <stdio.h>

//case 1:
// void printArray(int *ptr,int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n",i,*(ptr+i));
//     }
//}

//case 2:
void printArray(int ptr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n",i,*(ptr+i));
    }
}


//for both the cases, in the main function we are passing the address of the array so any changes for the array in the called function will be reflected on the original array as permanent changes.
int main(){
    int arr[5]={1,2,3,4,5};
    printArray(arr,5);
    
    return 0;
}