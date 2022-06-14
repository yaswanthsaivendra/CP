//Recursion
#include <stdio.h>

int factorial(int x);

int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("the value of factorial %d is %d", a, factorial(a));

    return 0;
}

int factorial(int x){
    if(x==1 || x==0){       //base condition - condition which is used to stop the recursion.
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
    
}