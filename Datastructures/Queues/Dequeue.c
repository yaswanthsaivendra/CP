#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void enqueue_rear(int x)
{
    if (rear == MAX - 1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue_rear()
{
    int x;
    if (front == rear)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        x = queue[rear];
        rear--;
        printf("\n the number deleted is: %d", x);
    }
}

void enqueue_front(int x)
{
    if (front==-1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        queue[front] = x;
        front--;
    }
}

void dequeue_front()
{
    int x;
    if (front == rear)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        front++;
        x = queue[front];
        printf("\n the number deleted is: %d", x);
    }
}

void display()
{
    if (front == rear)
    {
        printf("\nqueue is empty");
    }
    else
    {
        for (int i = front + 1; i <= rear; i++)
        {
            printf("\n%d", queue[i]);
        }
    }
}

int main()
{
    int option, val;
    do
    {
        printf("\n************");
        printf("\n1. enqueue front");
        printf("\n2. enqueue rear");
        printf("\n3. dequeue front");
        printf("\n4. dequeue rear");
        printf("\n5. DISPLAY");
        printf("\n6. EXIT");
        printf("\n************");
        printf("\n\n Enter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the element u want to insert: ");
            scanf("%d", &val);
            enqueue_front(val);
            break;
        case 2:
            printf("Enter the element u want to insert: ");
            scanf("%d", &val);
            enqueue_rear(val);
            break;
        case 3:
            dequeue_front();
            break;
        case 4:
            dequeue_rear();
            break;
        case 5:
            display();
            break;
        }
    } while (option != 6);

    return 0;
}