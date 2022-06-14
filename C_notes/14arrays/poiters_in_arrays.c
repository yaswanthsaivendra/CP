//Pointer arithmetic
#include <stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr=&arr[0];    //or ptr=arr;
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]=%d\n",i,*(ptr++));    //in every loop the value of ptr(address) is incremented by 4 as the array datatype is int.
    }                                           //if its char datatype array, it will be incremented by 1 byte, for a single ptr++
    

    return 0;
}