#include<stdio.h>
void main()
{
int i,size;
printf("enter the size");
scanf("%d",&size);
int a[size];
printf("enter the elements");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
int search;
printf("enter the search element");
scanf("%d",&search);
for(i=0;i<size;i ++)
{
    if(a[i]==search)
    {
       printf("the index of the search element is %d",i);
       break;
    }
}
if(i==size)
{
    printf("element not found");
}
}