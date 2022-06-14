//if statement
#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);
    
    if (a%2==0)
    {
        printf("%d is even\n", a);
    }
    
    return 0;
}

/*
if we have only one statement to write inside the condition block then we can directly write it without the need of curly braces.
EX:
if (a%2==0)
    printf("%d is even\n", a);

*/