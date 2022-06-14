//static variable 
//a static variable will be created in code section of main memory, so it remains as long as the program runs.
//a static variable have one of the properties of global variable, i.e.,it remains as long as the code runs but it is not accessible by any other functions other than the one in which it is created.
//a static variable is created only once when the function containing it, is called for the first time.

#include<iostream>

using namespace std;

int fun(){
    static int v=0;
    int a=5;
    v++;
    cout<<a<<" "<<v<<endl;
    return 0;
}

int main(){
    fun();  //at this first call, static variable will be created.
    fun();
    fun();
    return 0;
}