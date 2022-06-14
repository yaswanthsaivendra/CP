//call by reference
#include <stdio.h>

void swap(int *a, int *b);
int main(){
    int x=3,y=4;
    printf("the value of x and y before swap is %d and %d\n", x, y);
    swap(&x, &y);
    printf("the value of x and y after swap is %d and %d\n", x, y);
    return 0;
}
//In call by reference, we pass the address of actual variables.
void swap(int *a, int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}