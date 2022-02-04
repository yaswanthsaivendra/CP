//pointer to a function
#include<iostream>
using namespace std;


void display(){
    cout<<"hello world";
}

//example 2
int max(int x,int y){
    return x>y?x:y;
}
int min(int x, int y)
{
    return x < y ? x : y;
}

int main(){
    void (*fp)();   //declaration
    fp=display;     //intialization
    (*fp)();        //calling


    //example 2
    //A function pointer can point on any function which are having the same signature.
    int (*fptr)(int, int);
    fptr=max;
    (*fptr)(10,5);      //here fptr is calling max function
    fptr = min;
    (*fptr)(10, 5);     //here fptr is calling min function
    return 0;
}