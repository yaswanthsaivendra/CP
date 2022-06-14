#include<iostream>
#include<vector>    //library for vectors.
//vector - dynamic(like in linkedlist) + fast random access(like in array).

using namespace std;

//vectors - dynamic arrays(they can adjust their size automatically when an element is inserted or deleted from it).
//Element Access 
// at(), [], front(), back(), data()

int main(){
    //declaration   vector< object_type > vector_variable_name;
    //vector< object_type > vector_variable_name{val1,val2,val3,...};
    vector<int> v={2,4,6,8,10}; //declaration and intialization with some values.

    //when we dont intialize a vector, it will be intialized with garbage values of maximum size.

    v.push_back(20);    //insert an element at the end.
    v.push_back(30);
    v.pop_back(); //delete the last element .

    //populate a vector with the same value, multiple times.
    //vector< object_type > vector_variable_name(num_of_repitions,element_value);

    //using for each loop for traversing.
    cout<<"using for each loop"<<"\n";
    for(int x:v)     
    cout<<x<<"\n";


    //using Iterators for traversing.
    cout<<"using Iterator"<<"\n";
    vector<int>::iterator itr;
    for (itr =v.begin(); itr !=v.end(); itr++)
    cout<<*itr<<"\n";

    //using size() for traversing.
    cout<<"using size()"<<"\n";    
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    //size()    - returns number of elements present in the vector.
    //capicity() - Its the capacity of the vector(which is something different from size of the vector).
    //  Everytime when size equals the capacity and when we try to insert one more element, then the capacity of the vector will get doubled.
    //reserve() - ex: reserve(100) it reserves the capacity of 100.
    //resize(n) - it resizes the container to store 'n' elements.
    //empty()   - it returns whether the container is empty or not.

    return 0;
}

