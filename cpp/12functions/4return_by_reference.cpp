//return by reference
//we cannot return reference of a local variable in stack memory.
//reference is not even a pointer, so that we cant even point it on heap memory.


#include<iostream>

using namespace std;

int & fun(int &x){
    return x;
}

int main(){
    int a=10;
    fun(a); //here fun(a) is equals to a.
    fun(a)=25;  //so, here we are assining the value of 25 to a.
    cout<<a<<endl;  //so, here 25 will be printed.
    return 0;
}
