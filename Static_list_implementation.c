#include<stdio.h>
#include<stdlib.h>
#define max 100
int size=-1;
int list[max];
void insert_end();
void insert_spec();
void delete_end();
void delete_spec();
void display();

int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Insert from end\n2.Insert at specific position\n3.Delete at end\n4.Delete at specific position\n5.Display data\n6.Exit");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : insert_end();
            break;

            case 2 : insert_spec();
            break;

            case 3 : delete_end();
            break;

            case 4 : delete_spec();
            break;

            case 5 : display();
            break;

            case 6 : exit(0);

            default : printf("You entered wrong choice");
        }
    }
    return 0;
}

void insert_end()
{
    int data;
    printf("Enter data you want to insert");
    scanf("%d",&data);
    if(size==max-1)
    {
        printf("\n List is full \n");
        return;
    }
    else if(size==-1)
    {
        size=0;
        list[size]=data;
    }
    else
    {
        size++;
        list[size]=data;
    }
}

void insert_spec()
{
    int data,pos;
    printf("\n Enter the data and position you want to insert\n");
    scanf("%d%d",&data,&pos);
    if(pos==max-1)
    {
        printf("Display list is full");
        return;
    }
    else if((pos>size+1)&&(pos<0))
    {
        printf("Invalid Position! Enter the right position\n");
        return;
    }
    else
    {
       int i;
       for(i=size;i>=pos-1;i--)
       {
           list[i+1]=list[i];
       }
       list[pos-1]=data;
       size++;
    }
}

void delete_spec()
{
    int item_del,pos,i;
    printf("Enter the position: \n",pos);
    scanf("%d",&pos);
    if((pos>size) && (pos<0))
    {
        printf("You have entered the wrong position \n");
        return;
    }
    else
    {
        item_del=list[pos-1];
        for(i=pos-1;i<=size;i++)
        {
            list[i]=list[i+1];
        }
        size--;
        printf("Deleted item= %d \t",item_del);
    }
}

void delete_end()
{
    if (size == -1)
    {
        printf("List is empty.\n");
        return;
    }
    else
    {
        int item_del;
        item_del=list[size];
        size--;
        printf("Deleted item= %d \t",item_del);
    }
}

void display()
{
    int i;
    printf("List elements are \n");
    for(i=0;i<=size;i++)
    {
        printf("%d\t",list[i]);
    }
    printf("\n");
}