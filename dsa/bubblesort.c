#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf("enter no. of elements");
    scanf("%d\n",&n);
    int arr[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("sorted elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}