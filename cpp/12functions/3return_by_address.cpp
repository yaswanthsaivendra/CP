//return by address
//we cannot return the address of a local variable in stack memory.
//Heap memory is global, so we can use it anywhere in the program.
//So, return by address method is used in case of heap memory to return heap memory address using pointers.
#include<iostream>

using namespace std;

int* fun(){
    int *p=new int[5];
    for (int i = 0; i < 5; i++)
    {
        p[i]=5*(i+1);
    }
    cout<<p<<endl;
    return p;   //returning the address for the array in heap memory.
}


int main(){

    int *q=fun();
    cout<<q<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<q[i]<<"\n";
    }
    

    return 0;
}