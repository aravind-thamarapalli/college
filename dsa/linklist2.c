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
    struct node *head,*newnode, *temp, *del;
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
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    //deletion at beginning
    printf("\ndeletion at beginning");
    temp=head;
    head=temp->next;
    printf("\nelement deleted is %d\n",temp->data);
    free(temp);
    temp=head;
    while (temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    //deletion at position
    printf("enter the position to delete the element");
    scanf("%d",&pos);
    temp=head;
    if(pos == 0)
    {
        head=head->next;
        printf("deleted element: %d\n",temp->data);
        free(temp);
    }
    else
    {
        while(i!=pos)
        {
            temp=temp->next;
            i++;
        }
        del=temp->next;
        temp->next=del->next;
        del->next=NULL;
        printf("deleted element at position %d is: %d\n",pos,del->data);
        free(del);
    }
    temp=head;
    while (temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    //deletion at ending
    printf("deletion of element at end");
    temp=head;
    while (temp!=NULL)
    {
        del->next=temp;
        temp=temp->next;
    }
    printf("%d",temp->data);
    free(temp);
    temp=head;
    while (temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}