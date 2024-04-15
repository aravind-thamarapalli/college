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
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("the sorted series are");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}