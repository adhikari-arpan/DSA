//Implementation of Single Linked List

#include<stdio.h>
#include<stdlib.h>
#define max 5

struct node
{
    int data;
    struct node*next;
};
struct node *start=NULL;

void insert_beg();
void insert_end();
void insert_spec();
void delete_beg();
void delete_end();
void delete_spec();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specific position\n4.Delete at beginning\n5.Delete at end\n6.Delete at specific position\n7.Display the data\n8.Exit\n");
        printf("Enter a choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_spec();
            break;
        case 4:
            delete_beg();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_spec();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("You entered wrong choice\n");
        }
    }
    return 0;
}
void insert_beg()
{
    int data;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node*));
    printf("Enter data you want to insert at beginning:");
    scanf("%d",&data);
    newnode->data=data;
    if(start==NULL)
    {
        newnode->next=NULL;
        start=newnode;
    }
    else{
        newnode->next=start;
        start=newnode;
    }
}

void insert_end()
{
    int data;
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node*));
    printf("Enter data you want to insert at end:");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        temp = start;
        while((temp->next)!=NULL)
        {
            temp = temp->next;
        }
    }
    temp->next=newnode;
}

void insert_spec()
{
    int data,pos,i=1;
    struct node *newnode, *temp;
    printf("Enter data and position:");
    scanf("%d%d",&data,&pos);
    newnode=(struct node*)malloc(sizeof(struct node*));
    newnode->data=data;
    if(start==NULL)
    {
        newnode->next=NULL;
        start=newnode;
    }
    else
    {
        temp=start;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void delete_beg()
{
    struct node *temp;
    if(start==NULL)
    {
        printf("There is no element to delete\n");
        return;
    }
    else
    {
        temp=start;
        start = temp->next;
        free(temp);
    }
}

void delete_end()
{
    struct node *temp, *temp1;
    if(start==NULL)
    {
        printf("There is no element to delete\n");
        return;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        free(temp);
    }
}

void delete_spec()
{
    int pos,i=0;
    struct node *prev, *current;
    printf("Enter position to delete the node:");
    scanf("%d",&pos);
    prev = current = start;
    while(i<pos-1)
    {
        prev = current;
        current = current->next;
        i++;
    }
    printf("Deleted Element = %d",current->data);
    prev->next = current->next;
    free(current);
}

void display()
{
    struct node*temp;
    if(start==NULL)
    {
        printf("linked list is empty\n");
        return;
    }
    else
    {
        temp=start;
        printf("List elements are:");
        while(temp->next!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}