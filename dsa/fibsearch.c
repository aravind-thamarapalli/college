#include<stdio.h>
int min(int x,int y)
{
    int min=(x<y)?x:y;
    return min;
}
void main()
{
    int i,n,search,m,m1,m2,f1,f2,f3,offset;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    m1=1;
    m2=0;
    m=m1+m2;
    printf("enter search element");
    scanf("%d",&search);
    while(m<=n)
    {
        m2=m1;
        m1=m;
        m=m1+m2;
    }
    offset=-1;
    while(m>1)
    {
        i=min(offset+m2,n-1);
        if(a[i]>search)
        {
            m=m2;
            m1=m1-m2;
            m2=m-m1;
        }
        else if(a[i]<search)
        {
            m=m1;
            m1=m2;
            m2=m-m1;
            offset =i;
        }
        else 
        {
            printf("the index of search element is %d",i);
            break;
        }
    }
    if(m==1)
    {
        printf("element not found");
    }

}