//control statements in cpp
//its same as in c.
/*
if
if-else
if else-if
switch statement
*/


#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter ur age"<<endl;
    cin>>age;

    //if else
    if (age<18)
    {
        cout<<"you are not elgible"<<endl;
    }
    else 
    {
        cout<<"you are elgible"<<endl;
    }

    //if else if
    if (age < 18)
    {
        cout << "you are not elgible" << endl;
    }
    else if (age==18)
    {
        cout << "you are just 18, kindly wait at the verification center" << endl;
    }
    else
    {
        cout << "you are elgible" << endl;
    }
    
    return 0;
}

//Similarly, we have loops in cpp, same as in c.
/*
for loop
while
do while
*/

//as in the similar fashion in c,we can use break and continue statements.