#include <stdio.h>
#define MAX 10

int queue[MAX] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int front = -1, rear = -1;
void enqueue(int num);
void dequeue(void);
void display(void);

int main()
{
    int option, num;
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
            printf("\n Enter the number to be inserted in to the queue: ");
            scanf("%d", &num);
            enqueue(num);
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

void enqueue(int num)
{
    int idx;
    if (rear == MAX - 1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        for (int i = front + 1; i <= rear; i++)
        {
            if (queue[i] < num)
            {
                idx = i;
                break;
            }
        }
        for (int i = idx; i <= rear; i++)
        {
            queue[i + 1] = queue[i];
        }
        rear++;
        queue[idx] = num;
    }
}

void dequeue()
{
    int num;
    if (front == rear)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        front++;
        num = queue[front];
        printf("\n the number deleted is: %d", num);
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