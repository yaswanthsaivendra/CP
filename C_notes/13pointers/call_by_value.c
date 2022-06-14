//call by value
#include <stdio.h>

int sum(int a, int b);
int main(){
    int a=4,b=7;
    printf("the value of 4+7 is %d",sum(a,b));
    return 0;
}
//In call by value, the copies of the variable values will be passed to the function but not the actual variables. 
int sum(int a, int b){
    return a+b;
}