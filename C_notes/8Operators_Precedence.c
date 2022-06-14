//Operator Precedence

#include <stdio.h>

int main(){

    int x=2;
    int y=3;
    printf("the value of 3*x-8*y is %d", 3*x-8*y);          //Precedence
    printf("the value of 3*x-8*y is %d", 8 * y / 3 * x);    //Associativity from left to right

    return 0;
}

