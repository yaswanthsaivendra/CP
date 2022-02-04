//Typecasting
#include <iostream>

using namespace std;

int num=5;
int main(){
    //using scope identifier operator
    int num=4;
    cout<<"The value of local num is: "<<num<<endl;
    cout << "The value of global num is: " <<::num << endl; // :: this is scope resolution operator.

    //floating point numbers --> double --> behind the scenes.

    float a=34.4;           //By default any decimal point number is treated as double.
    long double b=34.4;     //if we have to mention them as float we have to use f or F, similarly for long double we have to use l or L.
    float c = 34.4f;        //now this is float
    float d = 34.4l;        //now this is long double

    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    

    //Typecasting
    int var1=40;
    float var2=44.44;

    cout << var1 + var2 << endl;
    cout<<var1+(int)var2<<endl;         //in cpp, type casting can be done either of these ways.
    cout << var1 + int(var2) << endl;

    return 0;
}