//Write a menu driven program for Linear queue
#include<stdio.h>
#include<stdlib.h>
#define size 10
int front=-1,rear=-1;
int q[size];
void enqueue();
void dequeue();
void display();
void total_elements();

int main()
{
    int choice;
    while(1)
    {
        printf("Enter your choice:\n1.Enqueue(Enter data to the queue)\n2.Dequeue(Remove data from queue)\n3.Display data\n4.Calculate number of elements\n5.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();
            break;

            case 2: dequeue();
            break;

            case 3: display();
            break;

            case 4: total_elements();
            break;

            case 5: exit(0);

            default: printf("You entered invalid choice");
        }
    }
    return 0;
}

    void enqueue()
    {
        int data;
        printf("Enter data you want to insert\n");
        scanf("%d",&data);
        if(rear==size-1)
        {
            printf("Queue is full\n");
            return;
        }
        else if(front==-1 && rear==-1)
        {
            front=rear=0;
            q[rear]=data;
        }
        else
        {
            rear++;
            q[rear]=data;
        }
    }

    void dequeue()
    {
        int item;
        if(front==-1 && rear==-1)
        {
            printf("Queue is empty\n");
            return;
        }
        else
        {
            item = q[front];
            front++;
            printf("Deleted element = %d\n",item);
        }
    }

    void display()
    {
        int i;
        if(front==-1 && rear==-1)
        {
            printf("Queue is empty\n");
            return;
        }
        else
        {
            printf("Queue elements are: \n");
            for(i=front;i<=rear;i++)
            {
                printf("%d\t",q[i]);
            }
            printf("\n");
        }
    }

    void total_elements()
    {
        int total;
        total = rear-front+1;
        if(front==-1 && rear==-1)
        {
            printf("Queue has no elements\n");
            return;
        }
        else
        {
            printf("Total number of elements = %d\n",total);
        }
    }