/*pointers are used for:
1. accessing heap memory
2. accessing resources which is outside of the program(for example a file stored in hard disk).
3. to pass parameters.
*/

/*
data variable       int a=10;
address variable    int *p;
intialization       p = &a;
dereferencing       cout<<*p;
*/

/* Accessing heap memory        new will be used to create heap memory.
heap memory is dynamically allocated (i.e., memory is allocated at run time, not at the compile time).
heap memory won't get deleted after they r going out of scope. so, we must deallocate them.
*/

#include<iostream>

using namespace std;


int main(){
    int *p=new int[5];
    p[0]=12;
    p[1]=13;
    cout<<p[1]<<"\n";
    
    delete []p;
    p=nullptr;
    
    //dynamic allocation for size of array by creating it in heap.
    //for a array created in stack, there is no way to change the size but it is possible with creating the array in heap memory.

    int *p =new int[20]; //creating an array in heap memory with size 20.

    p=new int[40];  //modifying the size of the same array to 40.
    return 0;
}