#include<stdio.h>
void main()
{
    int n,i,mid,search,l,h;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the elements in ascending order\n");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the search elemnent");
    scanf("%d",&search);
    l=0;
    h=n-1;
    i=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if (a[mid]>search)
        {
            h=mid-1;
        }
        else if(a[mid]<search)
        {
            l=mid+1;
        }
        else 
        {
            printf("the index of search element is %d",mid);
            break;
        }
        i++;    
    }
    
}