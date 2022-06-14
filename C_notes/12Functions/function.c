//Functions
#include <stdio.h>
void display(); // Function prototype or function declaration

int main(){
    int a;
    printf("Intializing display function\n");
    display();  //function call
    printf("Display function work is finished.\n");
    
    return 0;
}
//Function defnition
void display(){
    printf("This is display function\n");
}
