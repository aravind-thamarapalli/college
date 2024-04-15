#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    
};

void main()
{
    int ch=1,pos,i=1;
    struct node *head,*newnode, *temp;
    head=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n enter the data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next =newnode;
            temp=newnode;
        }
        printf("\nwanna continue");
        scanf("%d",&ch);
    }while(ch==1);
    temp=head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    //insertion at beginning
    printf("\ninsertion at beginning");
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the value to be inserted");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    printf("\nafter insertion at begginniing");
    temp=head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    //insertion at middle
    printf("\ninsertion at middle");
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the value to be inserted");
    scanf("%d",&newnode->data);
    printf("\nenter the position");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
        newnode->next=temp->next;
        temp->next=newnode;
    printf("\nafter insertion at middle");
    temp=head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    //insertion at ending
    printf("\ninsertiona at ending");
    newnode=(struct node*)malloc(sizeof(struct node));
     printf("\nenter the value to be inserted");
    scanf("%d",&newnode->data);
    temp=head;
    while (temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=0;
    temp=head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
