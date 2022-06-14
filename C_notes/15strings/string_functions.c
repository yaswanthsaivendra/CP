//strings functions
#include <stdio.h>
#include <string.h> //header file for string functions

int main(){
    char str[] = "yashvendra";
    int length = strlen(str); //return the length of the string and it wont take null character into count.
    printf("Length of the string is %d\n",length);
    char str_output[20];
    strcpy(str_output, str); //strcpy(target,source);    //it wont append anything to the destination string, rather it replaces the destination string with source string.
    printf("final copied string is : %s\n",str_output);
    char str2[10] = "sai";
    strcat(str,str2);//strcat(target,source); concatenate both the strings with any spaces. the concatenated string is stored in target(i.e., first argument).
    printf("concatenated string is: %s\n",str);
    /*strcmp(leftstr,rightstr) function    used to compare two strings and returns a integer value.
    returns 0 if both the strings are same.
    returns a positive number if the first mismatching character in leftstr have greater ascii value than the corresponding value in rightstr.
    returns a negative number if the first mismatching character in leftstr have lesser ascii value than the corresponding value in rightstr.
    */
   char leftstr[]="hello";
   char rightstr[]="helLo";
   int out_value=strcmp(leftstr,rightstr);
   printf("output: %d",out_value);
   return 0;
}