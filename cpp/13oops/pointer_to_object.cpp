#include <iostream>
// . operator is used on the actual object.
// whereas -> operator is used on pointer to the object.
// we can use these two operators in case of classes(i.e., for their objects), structures and unions.
using namespace std;

//by default , data or functions in the class are private.
class rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    //pointer to a object in stack
    rectangle r1;   //object r1 is created in stack.
    rectangle *p;   //pointer p is created in stack.
    p=&r1;
    p->length=10;       // -> is called cap
    p->breadth=5;
    cout << p->area() << "\n";
    cout << p->perimeter() << "\n";


    //pointer to a object in heap
    rectangle *ptr=new rectangle;   //ptr in stack pointing to object in heap.(DMA)
    //in c, rectangle *ptr =(rectangle *)malloc(sizeof(rectangle *))
    ptr->length = 10;                 
    ptr->breadth =10;
    cout << ptr->area() << "\n";
    cout << ptr->perimeter() << "\n";
    return 0;
}