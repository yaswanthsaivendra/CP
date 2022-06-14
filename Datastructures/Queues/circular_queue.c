#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front = 0, rear = 0;

void enqueue(int x)
{
    if ((rear+1)%MAX==front)
        printf("Queue OVERFLOW\n");
    else
    {
        rear=(rear+1)%MAX;
        queue[rear]=x;
    }       
}

void dequeue()
{
    int x;
    if (front==rear){
        printf("QUEUE UNDERFLOW\n");
    }
    else
    {
        front = (front + 1) % MAX;
        x = queue[front];
        printf("The element deleted from the queue is %d", x);
    }
}

void display(){
    int i=front+1;
    do
    {
        printf("%d\n", queue[i]);
        i=(i+1)%MAX;
    } while (i!=(rear+1)%MAX);
    
}

int main(){
    int option,val;
    do
    {
        printf("\n************");
        printf("\n1. INSERT");
        printf("\n2. DELETE");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\n************");
        printf("\n\n Enter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the element u want to insert: ");
            scanf("%d",&val);
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        }
    } while (option != 4);

        return 0;
}