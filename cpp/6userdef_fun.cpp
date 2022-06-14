//user defined data types
/*
struct
union 
enum
*/
#include<iostream>

using namespace std;


union money         //can only use one of them at a time.
{
    int rice; //4 bytes     
    char car; //1 byte      //as one of them can be used at a time, they share the memory.
    float pounds; //4 bytes
};


int main(){


    //union
    union money m1;
    m1.rice = 34;
    cout<<"money union value is "<<m1.rice<<endl;
    m1.car='B';   //here the memory is reassigned to the car character, so we get a garbage when tried to print the rice.
    cout << "money union value is " << m1.car<< endl;
    cout << "money union value is " << m1.rice <<"<<----garbage value"<< endl;

    //enum
    enum Meal{breakfast=55, lunch, dinner};
    cout << breakfast<<endl;
    cout<<lunch<<endl;
    cout << dinner<<endl;

    return 0;
}