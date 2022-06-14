//Arithmetic Operators

#include <stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    int c = -10;
    printf("Add = %d\n", a + b);
    printf("sub = %d\n", a - b);
    printf("Mul = %d\n", a * b);
    printf("div = %d\n", a / b);  // Integer divsion truncates coefficient part.
    printf("modulo = %d", a % b); //modulo returns remainder of integer division.
    printf("modulo = %d", c % b); //sign of the returned value will be the sign of the numerator.
    return 0;
}

// Arithmetic Operations between
//int and int       returns int
//int and float     returns float
//float and float   returns float

/* <<<----->>>>
Relational operators   compare things and returns either True or False 
<
<=
>
>=
==
!=
<<<---->>>>
*/

/* <<<----->>>>
Logical operators   To compare multiple conditions at a time.

&&      Logical AND
||      Logical OR
!       Logical NOT             its an Unary operator
<<<---->>>>
*/

//Assignment Operator   =
//Short Hand Operator   v op= exp
//EX:
//x+=3           x= x+3
//x*=3           x= x*3

//Increment and Decrement Operators
//Bitwise Operators

//Special Operators