//Write a menu driven program for Circular Queue
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
        if((front==0&&rear==size-1)||(front==rear+1))
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
            rear=(rear+1)%size;
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
            if(front==rear)
            {
                front=rear=-1;
            }
            else
            {
                front=(front+1)%size;
            }
            printf("Deleted element = %d\n",item);
        }
    }

    void display()
    {
        int i=front;
        if(front==-1 && rear==-1)
        {
            printf("Queue is empty\n");
            return;
        }
        else
        {
            printf("The elements are\n");
            do
            {
                printf("%d\t",q[i]);
                i=(i+1)%size;
            }while(i!=rear+1);
            printf("\n");
        }
    }

    void total_elements()
    {
        int count=0,i;
        if(front==-1 && rear==-1)
        {
            printf("Queue has no elements\n");
            return;
        }
        else
        {
            i=front;
            do
            {
                count++;
                i=(i+1)%size;
            }while(i!=rear+1);
            printf("Total number of elements = %d\n",count);
        }
    }

