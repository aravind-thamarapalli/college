#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
};
void main()
{
    int pos, ch=1, i=0;
    struct node *head=0, *next, *new, *temp, *tail;
    do
    {
        new = (struct node*)malloc(sizeof(struct node));
        printf("\nenter the data");
        scanf("%d",&new->data);
        new->next=0;
        if(head==0){
            head = tail = new;
        }
        else{
            new->pre = tail;
            tail->next = new;
            tail=new;
        }
        printf("\nwanna continue");
        scanf("%d",&ch);
    } while (ch==1);
    temp=head;
    while (temp!=0)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }

    //insertion at begining
    printf("\ninsertion at begining");
    temp=head;
    new = (struct node*)malloc(sizeof(struct node));
    printf("\nenter the data");
    scanf("%d",&new->data);
    if (head==0)
    {
        head = temp = new;    
    }
    else
    {
        new->pre = 0;
        new->next = head;
        head = new;
    }
    temp=head;
    while (temp!=0)
    {
        printf("\n%d",temp->data);
        temp = temp->next;
    }
    
    //inserion at ending
    printf("\ninsertiona at ending");
    temp = head;
    new = (struct node*)malloc(sizeof(struct node*));
    printf("\nenter the data");
    scanf("%d",&new->data);
    if(head->next==0)
    {
        head=new;
    }
    else{
        tail->next=new;
        new->pre = tail;
        tail=next;    
    }
    temp=head;
    while (temp!=0)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}