#include <iostream>

using namespace std;

struct employee
{
    int eid;      //4 bytes          //this one struct employee will take a total of 9 bytes.
    char favchar; //1 byte
    int salary;   //4 bytes
};
struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r; //declaration
    r = {5, 5};         //intialization
    struct rectangle r1 = {10, 5}; //declaration+intialization
    r1.breadth = 10;               //accessing a variable in structure
    printf("area of rectangle is %d\n", r.length * r.breadth);
    printf("area of rectangle is %d\n", r1.length * r1.breadth);

    struct employee yash;
    yash.eid = 1;
    yash.favchar = 'A';
    yash.salary = 100000000;
    cout << "the employee id is " << yash.eid << "\n";
    cout << "the employee favchar is " << yash.favchar << "\n";
    cout << "the employee salary is " << yash.salary << "\n";
    return 0;
}