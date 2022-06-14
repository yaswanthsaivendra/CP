#include <stdio.h>

int main(){
    int i =50;
    int *j=&i;
    printf("value of i is %d\n", i);
    printf("value of i is %d\n", *j);
    printf("value of i is %d\n", *(&i));
    printf("address of i is %u\n", &i);
    printf("address of i is %u\n", j);
    printf("address of i is %u\n", *(&j));
    return 0;
}