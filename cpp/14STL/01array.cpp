//Array in STL
// array<T, N> arr;    ex: array<int, 5> arr;
// Array is a container that encapsulates fixed size arrays.
// Array size is needed at compile time.
// Access Elements:
//  at()        ex: arr.at(index) 
//  []          ex: arr[4]
//  front()     returns element at start
//  back()      returns element at end
//  data()      returns a pointer pointint to first element in array object.

#include <iostream>
#include <array>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //declaration
    array<int, 5> arr;

    //Intialization
    array<int, 5> myarray{1, 2, 3, 4, 5};   // uniform intialization.
    array<int, 5> myarray1;
    myarray1 = {1, 2, 3, 4, 5};

    array<int , 7> arr1;
    arr1.fill(10);  //fill all 7 elements in array with value 10.
    

    return 0;
}