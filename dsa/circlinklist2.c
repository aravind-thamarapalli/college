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
        printf("\nwanna continue");
        scanf("%d",&ch);
    }while(ch==1);

    temp=head;
    do
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }while(temp!=head);

    //deletiona at begining

    printf("\ndeletion at begining");
    temp=head;
while (temp->next!=head)
{
    temp=temp->next;
}
    del = head;
    temp->next=head->next;
    head=temp->next;
    del->next=0;
    free(del);
    temp=head;
    do
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }while(temp!=head);

    //deletion at ending

    temp=head;
    printf("\ndeletion at ending");
    while (temp->next->next!=head)
    {
        temp=temp->next;
    }
    del = temp->next;
    temp->next = head;   
    del->next=0;
    free(del);
    temp=head;
    do
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }while(temp!=head);

    //deletion at position

    printf("\n deletion at position");
    printf("\nenter the position");
    scanf("%d",&pos);
    temp=head;
    for ( i = 0; i < pos-1; i++)
    {
        temp=temp->next;
    }
    del=temp->next;
    temp->next=del->next;
    del->next = NULL;
    free(del);
     temp=head;
    do
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }while(temp!=head);

    
}