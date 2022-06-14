//if else statement

//IN c, any non-zero number is considered as True.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd",a);
    }
    

    return 0;
}