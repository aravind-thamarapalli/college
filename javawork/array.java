import java.util.*;
class array
{
public static void main(String args[])
    {
        int a[] = new int[5];
        Scanner sc = new Scanner(System.in);
        int i;
        System.out.println("enter the array elements");
        for(i=0;i<5;i++)
        {
            a[i] = sc.nextInt();
        }
        System.out.println("the array elements are ");
        for(i=0;i<5;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}