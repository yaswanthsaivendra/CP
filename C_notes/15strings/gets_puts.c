//gets() and puts() functions.

#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter your name: ");
    gets(str);//we are able to input strings with spaces.
    puts(str);//puts() is a simpler version of printf() and restricted only to print strings to screen and also prints a new line at the end.
    return 0;
}