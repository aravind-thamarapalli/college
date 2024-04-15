#include<stdio.h>
int a[7];
void inorder(int n)
{
    if(n >= 7)
    {
        return;
    }
    inorder((2*n)+1);
    printf("\n %d",a[n]);
    inorder((2*n)+2);
}
void preorder(int n)
{
    if(n >= 7)
    {
        return;
    }
    printf("\n %d",a[n]);
    preorder((2*n)+1);
    preorder((2*n)+2);
}
void postorder(int n)
{
    if(n >= 7)
    {
        return;
    }
    preorder((2*n)+1);
    preorder((2*n)+2);
    printf("\n %d",a[n]);
}
void main()
{
    int i;
    printf("\n enter binary tree");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\ninorder");
    inorder(0);
    printf("\npreorder");
    preorder(0);
    printf("\npostorder");
    postorder(0);
}