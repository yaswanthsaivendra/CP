#include <stdio.h>
#define MAX 10

int queue[MAX];
int ans[MAX];
int front = -1, rear = -1;
int front_ans = -1, rear_ans = -1;
void enqueue(int num);
void enqueue_ans(int num);
int dequeue(void);
void display(void);
int return_front();

    int main()
{
    int n;
    printf("Enter the number of elements u want to enter into the queue: ");
    scanf("%d",&n);
    int var;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&var);
        enqueue(var);
    }
    
    

    
    int k = n;


    for (int i = 0; i < n; i++)
    {

        // Get the last element to the
        // front of queue
        for (int j = 0; j < k - 1; j++)
        {
            var = dequeue();
            enqueue(var);
        }

        // Get the last element and
        // add it to the new queue
        enqueue_ans(return_front());
        dequeue();
        k--;
    }

    //display
    if (front_ans == rear_ans)
    {
        printf("\nans queue is empty");
    }
    else
    {
        for (int i = front_ans + 1; i <= rear_ans; i++)
        {
            printf("\n%d", ans[i]);
        }
    }
}



void enqueue(int num)
{
    
    if (rear == MAX - 1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        rear++;
        queue[rear] = num;
    }
}

void enqueue_ans(int num)
{

    if (rear_ans == MAX - 1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        rear_ans++;
        ans[rear_ans] = num;
    }
}

int dequeue()
{
    if (front == rear)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        front++;
        return queue[front];
    }
}

int return_front()
{
    if (front == rear)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        return queue[front+1];
    }
}


