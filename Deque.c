#include<stdio.h>
#include<stdlib.h>
#define size 5
int i,n,front=-1,rear=-1,data,q[size];
void enqueue_r();
void dequeue_r();
void display();
void enqueue_f();
void dequeue_f();
    int main()
    {
        int choice;
        while(1)
        {
        printf("\n1.Enqueue from rear side\n2.Dequeue from rear side\n3.Display the data\n4.Enqueue from front\n5.Dequeue from front\n6.Exit");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : enqueue_r();
            break;

            case 2 : dequeue_r();
            break;

            case 3 : display();
            break;

            case 4 : enqueue_f();
            break;

            case 5 : dequeue_f();
            break;

            case 6 : exit(0);

            default : printf("You entered wrong choice");
        }
        }
        return 0;
    }

void enqueue_r()
{
    int data;
    printf("Enter data you want to insert\n");
    scanf("%d",&data);
    if(front==0 && rear==size-1)
    {
        printf("Deque is full \n");
        return;
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        q[rear]=data;
    }
    else
    {
        if(rear!=size-1)
        {
            rear++;
            q[rear]=data;
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
                q[i-1]=q[i];
            }
            q[rear]=data;
            front--;
        }
    }
}

void enqueue_f()
{
    int data;
    printf("Enter data you want to insert\n");
    scanf("%d",&data);
    if(front==0 && rear==size-1)
    {
        printf("Deque is full \n");
        return;
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        q[front]=data;
    }
    else
    {
        if(front!=0)
        {
            front=front-1;
            q[front]=data;
        }
        else
        {
            for(int i=rear;i>=front;i--)
            {
                q[i+1]=q[i];
            }
            q[front]=data;
            rear++;
        }
    }
}

void dequeue_r()
{
    if(front==-1 && rear==-1)
    {
        printf("Deque is Empty\n");
        return;
    }
    else if(front==rear)
    {
        data = q[rear];
        front=rear=-1;
        printf("Deleted Element = %d",data);
    }
    else
    {
        data = q[rear];
        rear = rear-1;
        printf("Deleted Element = %d",data);
    }
}

void dequeue_f()
{
    if(front==-1 && rear==-1)
    {
        printf("Deque is Empty\n");
        return;
    }
    else if(front==rear)
    {
        data = q[front];
        front=rear=-1;
        printf("Deleted Element = %d",data);
    }
    else
    {
        data = q[front];
        front = front+1;
        printf("Deleted Element = %d",data);

    }
}

void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("Deque is empty\n");
        return;
    }
    else
    {
        printf("Queue elements are: \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",q[i]);
        }
    }
    printf("\n");
}