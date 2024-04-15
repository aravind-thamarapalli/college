#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void main(){
    int ch=1,pos,i;
    struct node *head, *temp, *new, *del;
    head = 0;
    do{
        printf("\nenter the data");
        new = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        if(head == 0)
        {
            head = temp = new;
        }
        else{
            temp->next = new;
            temp = new;
        }
        temp ->next = head;
        printf("wanna continue");
        scanf("%d",&ch);
    }while(ch==1);

    temp=head;
    do
    {
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp!=head);

    //insertion at begining

    new = (struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&new->data);
    temp = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = new;
    new->next = head;
    head = new;
    temp=head;
    do
    {
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp!=head);

    //insertion at middle
    new = (struct node*)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&new->data);
    temp = head;
    printf("enter the position");
    scanf("%d",&pos);
    for(i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    new->next=temp->next;
    temp->next = new;
    temp=head;
    do
    {
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp!=head);

    //insertion at ending
    new = (struct node*)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&new->data);
    temp = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = new;
    new->next = head;

    temp=head;
    do
    {
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp!=head);

}