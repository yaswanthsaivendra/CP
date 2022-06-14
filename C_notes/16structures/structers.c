//structures

#include <stdio.h>
#include <string.h>

//structers are used to define user defined datatypes.

struct  employee{
    int id;                 //this declares a new user defined data type named employee.
    float salary;
    char name[10];
};

int main(){
    
    struct employee e1;
    e1.id= 120;     //. is called member operator.
    e1.salary=50000.00;
    // e1.name="yash";  -->> it wont work, bcoz its a character array but not a character pointer which only supports string assignment.
    strcpy(e1.name,"yash");
    printf("%d\n", e1.id);
    printf("%f\n",e1.salary);
    printf("%s\n", e1.name);
    return 0;
}