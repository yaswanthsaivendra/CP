//Linked list is a linking of nodes.
//Each node consists of two parts, 1 is data and the other is pointer to next node(i.e., next).


#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;

};

int main(){
    //creating the head pointer in stack
    struct Node *p;
    //creating a node in heap
    //in c, we use malloc and malloc function returns a void type pointer, so we typecast it.
    // p = (struct Node *)malloc(sizeof(struct Node)); 
    p = new Node;
    //accessing the members of the node.
    p->data=20;
    p->next=0;

    
    return 0;
}