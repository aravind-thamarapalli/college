#include<stdio.h>
int a[20],n=20,top=-1;
int push(int val)
{
    if(top>=n-1)
    printf("stack over flow");
    else{
        top++;
        a[top] = val;
    }
}
int pop()
{
    if(top<=-1)
    printf("stack under flow\n");
    else {
        printf("popped element is %d\n",a[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top>=0){
        printf("array elements are\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        }
    else printf("stack under flow\n");
}
void main()
{
    int val,ch;
    printf("1: PUSHING OF ELEMENT\n");
    printf("2: POPPING OF ELEMENT\n");
    printf("3: DISPLAYING OF ELEMENT\n");
    printf("4: EXIT\n");
    
    do{
        printf("ENTER THE OPTION TO DO SO\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:{
                    printf("enter the pushing element\n");
                    scanf("%d",&val);
                    push(val);
                    break;
            }
            case 2:{
                    pop();
                    break;                
            }
            case 3:{
                display();
                break;
            }             
            case 4:{ 
                printf("EXIT\n");
                break;
            }
            default: {
                printf("invalid option\n");
            }   


        }
 
    }
    while (ch!=4);    
}