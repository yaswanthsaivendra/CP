//array of structures
#include <stdio.h>
#include <string.h>

struct  employee 
{
    int id;
    float salary;
    char name[10];
};

int main(){
    struct employee arr[100];
    arr[0].id = 1;
    arr[0].salary = 20000.50;
    strcpy(arr[0].name,"yash");

    arr[0].id = 2;
    arr[0].salary = 30000.56;
    strcpy(arr[1].name, "sai");

    arr[0].id = 3;
    arr[0].salary = 40000.50;
    strcpy(arr[2].name, "vendra");

    return 0;
}