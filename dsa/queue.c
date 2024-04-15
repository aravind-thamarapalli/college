#include<stdio.h>
int a[20],max=20,rear=-1,front=-1;
void enqueue(int val)
{
    if(rear==max-1){
    printf("overflow");
    
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else rear+=1;
    a[rear]=val;
}
void dequeue(int val)
{
    if(front==-1 || front>rear)
    printf("overflow");
    else
    {
        val=a[front];
        front+=1;
    }
}
void peek()
{
    if(rear==-1 && front==-1)
    printf("overflow condition");
    else 
    printf("the top most element is %d\n",a[front]);
}
void display()
{
    if(rear==-1 && front==-1)
    printf("overflow condition");
    else{
    printf("the array elements are");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}}
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
                    printf("enter the element to pop");
                    scanf("%d",&val);
                    dequeue(val);
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