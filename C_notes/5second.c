#include <stdio.h>

int main(){
    float x,p;
    double y,q;
    unsigned k;
    int m = 54321;
    long int n = 1234567890;
    x=1.2345678900000;
    y=9.87654321;
    k=54321;
    p=q=1.0;
    printf("m = %d\n", m);         
    printf("n = %ld\n", n);
    printf("x = %.12f\n", x);       //.12 represents precision of the floating point number.
    printf("x = %f\n", x);
    printf("y=%.12f\n",y);
    printf("y = %lf\n", y);
    return 0;
}
/*
Format specifiers
    FORMAT      REPRESENTS
    %c          character
    %d          integer
    %f          floating point
    %h          short
    %u          unsigned
    %lf         double
    %Lf         long double
*/

/*
Escape characters
\n      new line
\t      tab
\r      carriage return
\b      blank space
*/