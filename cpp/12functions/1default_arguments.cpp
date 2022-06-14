//default arguments
//default arguments should always be placed at the end.
#include<iostream>

using namespace std;

int sum(int a,int b,int c=0)    //here c is default argument(i.e., optional)
{
    return a+b+c;
}

int main()
{
    cout << sum(2, 4);
    cout << sum(2, 4, 6);
    return 0;
}