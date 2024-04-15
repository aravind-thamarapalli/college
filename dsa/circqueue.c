#include<stdio.h>
int a[20],max=20,front=-1,rear=-1;
void enqueue(int val)
{
    if(front==0 && rear==max-1)
    printf("overflow");
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear==max-1 && front!=0)
    {
        rear=0;
    }
    else rear+=1;
    a[rear]=val;
}
void dequeue()
{
    int val;
    if(front=-1)
    {
        printf("over flow");
    }
    val=a[front];
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==max-1)
    {
        front=0;
    }
    else front++;
}
void peek()
{
    if(front!=-1)
    {
        printf("underflow");
    }
    else printf("%d",a[front]);
}
void main()
{
    int val,ch;
    printf("1: PUSHING OF ELEMENT\n");
    printf("2: POPPING OF ELEMENT\n");
    printf("3: TO PEEK THE ELEMENT\n");
    printf("4: TO DISPLAY THE ELEMENTS\n");
    printf("5: EXIT\n");
    
    do{
        printf("ENTER THE OPTION TO DO SO\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:{
                    printf("enter the pushing element\n");
                    scanf("%d",&val);
                    enqueue(val);
                    break;
            }
            case 2:{
                    dequeue();
                    break;                
            }
            case 3:{
                    peek();
                    break;
            }             
            case 4:{
                    display();
                    break;
            }
            case 5:{ 
                printf("EXIT\n");
                break;
            }
            default: {
                printf("invalid option\n");
            }   


        }
 
    }
    while (ch!=5);    
}