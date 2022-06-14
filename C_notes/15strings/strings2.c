#include <stdio.h>

int main(){
    char str[] = "Y45HV3ND24";
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }

    return 0;
}