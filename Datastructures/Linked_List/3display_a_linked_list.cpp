#include<iostream>
using namespace std;

void display(struct Node);
void recursive_display(struct Node);
void recursive_reverse_display(struct Node);

struct Node
{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head;
    display(head);
    recursive_display(head);
    recursive_reverse_display(head);
    return 0;
}

void display(struct Node *p){
    while (p!=NULL)
    {
        cout<< p->data<<"\n";
        p=p->next;
    }
    
}

void recursive_display(struct Node *p){
    if(p!=NULL){
        cout<<p->data<<'\n';
        recursive_display(p->next);
    }
}

void recursive_reverse_display(struct Node *p)
{
    if (p != NULL)
    {
        recursive_reverse_display(p->next);
        cout << p->data << '\n';
    }
}