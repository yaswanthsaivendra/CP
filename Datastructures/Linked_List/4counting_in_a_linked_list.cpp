#include<iostream>
using namespace std;

int count(struct Node);
int recursive_count(struct Node);

struct Node{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    int num_of_nodes;
    num_of_nodes = count(head);
    cout<<num_of_nodes<<"\n";
    num_of_nodes = recursive_count(head);
    cout << num_of_nodes << "\n";
    return 0;
}

int count(struct Node * p)
{
    int c = 0;
    while (p!= NULL)
    {
        c++;
        p=p->next;
    }
    
}


int recursive_count(struct Node *p)
{
    if (p==0)
    {
        return 0;
    }
    else
    {
        return 1 + recursive_count(p->next);
    }
    
}