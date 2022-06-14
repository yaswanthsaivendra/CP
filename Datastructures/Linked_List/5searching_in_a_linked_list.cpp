#include<iostream>
using namespace std;


struct Node{
    int data;
    struct Node *next;
};
struct Node *head;

Node *search(struct Node *p, int key);

int main()
{
    int key;
    cout<<"enter the data you want to search: ";
    cin>>key;

    search(head,key);


    return 0;
}


// Improved searching function with the feature of moving the recently searched nodes to the start of the linked list.
Node *search(struct Node *p, int key){
    struct Node *temp= NULL;
    while (p!=NULL)
    {
        if(key==p->data){
            temp->next=p->next;
            p->next=head;
            head=p;
            return p;
        }
        else
        {
            temp=p;
            p=p->next;
        }
        
    }
    return NULL;  
}