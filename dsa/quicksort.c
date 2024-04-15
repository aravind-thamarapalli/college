#include<stdio.h>
void main()
{
    int loc,i,j,l,r,n,temp;
    printf("enter array size");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    l=0;
    r=n;
    loc=l;
    while(l!=r)
    {
        if(loc == l){
        if(a[loc]>a[r])
        {
            temp = a[loc];
            a[loc] = a[r];
            a[r] = temp;
            r--;   
        }
        else r--;
        }
        else if(loc ==r)
        {
            if(a[l]>a[loc])
            {
                temp = a[l];
                a[l] = a[loc];
                a[loc] = temp;
                l++;
            }
            else l++;
        }
        else printf("\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}