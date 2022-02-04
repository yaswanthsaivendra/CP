//Input and Output
#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "\nEnter the value of num1: "; // << is called Insertion operator
    cin>>num1; // >> is called Extraction operator.

    cout << "\nEnter the value of num2: "<<endl; //endl is nothing but new line character.
    cin >> num2;

    cout << "The sum is" << num1+num2;

    return 0;
}
