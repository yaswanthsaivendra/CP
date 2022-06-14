/*Conditional Operator
A short hand if-else can be written using the conditional operator, also called Ternary Operator.
    condition ? expression-if-true : expression-if-false
one-liner if-else statement.
*/


#include <stdio.h>

int main(){
    int a;
    printf("Enter a\n");
    scanf("%d",&a);

    (a < 5) ? printf("A is less than 5") : printf("A is not less than 5");
    return 0;
}