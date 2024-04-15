#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf("enter the size");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j=i-1;
        while (temp<arr[j] && j>=0) 
        {
            arr[j+1] = arr[j];
            j--;
            arr[j+1] = temp;
        }
    }
    printf("the sorted series are");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}