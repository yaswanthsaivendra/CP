#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;



void insert_at_start(int num);
int insert_at_a_given_position(int position, int num);
void insert_at_end(int num);
void insert_in_sorted_list(int num);
void display(struct Node *p);

int main()
{
    int option, num;
    do
    {

        cout<<"Enter the option"<<"\n";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Enter the element u want to insert: ";
            cin>>num;
            insert_at_start(num);
            cout<<"A new node is sucessfully inserted at the start"<<"\n";
            break;
        case 2:
            int position, value;
            cout << "Enter the element u want to insert: ";
            cin >> num;
            cout << "Enter the position at which u want to insert: ";
            cin >> position;
            value =insert_at_a_given_position(position, num);
            if (value)
            {
                cout << "A new node is sucessfully inserted at the position " << position << "\n";
            }
            break;
        case 3:
            cout << "Enter the element u want to insert: ";
            cin >> num;
            insert_at_end(num);
            cout<<"A new node is sucessfully inserted at the end"<<"\n";
            break;
        case 4:
            cout << "Enter the element u want to insert: ";
            cin >> num;
            insert_in_sorted_list(num);
            cout<<"A new node is sucessfully inserted"<<"\n";
            break;
        case 5:
            display(head);
            break;
        }
    } while (option!=6);
    
    return 0;
}

void insert_at_start(int num){
    struct Node *ptr=new Node;
    ptr->data=num;
    ptr->next=head;
    head=ptr;
}

int insert_at_a_given_position(int position, int num){
    struct Node *ptr=new Node;
    ptr->data=num;
    struct Node *temp=head;
    for (int i = 1; i < position-1; i++)
    {
        if(temp->next==NULL){
            cout<<"No such position "<<position<<" exists in linked list"<<"\n";
            return 0;
        }
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    return 1;
}

void insert_at_end(int num){
    struct Node *ptr = new Node;
    ptr->data=num;
    struct Node *temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=NULL;
}

void insert_in_sorted_list(int num){
    struct Node *ptr=new Node;
    ptr->data=num;
    ptr->next=NULL;
    struct Node *p = head;
    struct Node *q=NULL;
    if (head==NULL)
    {
        head=ptr;
    }
    else
    {
        while (p->data < ptr->data && p->next != NULL)
        {
            q=p;
            p-p->next;
        }
        if (p==head)
        {
            ptr->next=head;
            head=ptr;
        }
        else
        {
            ptr->next=q->next;
            q->next=ptr;
        }    
    }
}


void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << "\n";
        p = p->next;
    }
}
