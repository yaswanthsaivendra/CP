#include<iostream>
#include<iomanip>   //contains declarations of some input/output manipulator functions.

using namespace std;

int main(){
    //Constants
    const int a=3;  //we cannot reassign the value of a constant variable.
    cout<<"the value of a is "<<a<<endl;

    //Manipulators  Manipulators are helping functions that can modify input/output stream.
    //It does not mean that we can change the value of a variable, it only modifies the I/O stream.

    //1. endl --> ostream --> it is used to enter a new line and after entering a new line, it flushes the output stream.
    cout<<"endl function is defined in iostream library"<<endl;

    //2. setw function --> stands for set width --> declared in <iomanip> header file
    //this manipulator is used to specify the minimum number of character positions on the output field a variable will consume.
    int p=1,q=22,r=333,s=4444;
    cout << "the value of p is:" << setw(4) << p << endl;
    cout<<"the value of q is:"<<setw(4)<<q<<endl;
    cout<<"the value of r is:"<<setw(4)<<r<<endl;
    cout << "the value of s is:" << setw(4) << s << endl;
    return 0;
}