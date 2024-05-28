//Menu driven stack implementation program
#include<stdio.h>
#include<stdlib.h>
#define size 6
int stack[size];
int top=-1;
void push();
void pop();
void display();
void displaytop();
    int main()
    {
        int choice;
        printf(" Press 1 for push\n Press 2 for pop\n Press 3 for display\n Press 4 for top display\n Press 5 for exit\n");
        while(1)
        {
            printf("Enter your choice\n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: push();
                break;

                case 2: pop();
                break;

                case 3: display();
                break;

                case 4: displaytop();
                break;

                case 5: exit(0);
                break;

                default: printf("You entered wrong choice\n");
            }
        }
        return 0;
    }

void push()
{
    int data;
    if(top==(size-1))
    {
        printf("Stack is fulfill\n");
    }
    else
    {
        printf("Enter data to be inserted\n");
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("Deleted item = %d",item);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("There is no data to be displayed\n");
    }
    else
    {
        printf("Stack data are\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
}
void displaytop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("stack top index = %d\n",top);
        printf("Stack top data = %d\n",stack[top]);
    }
}