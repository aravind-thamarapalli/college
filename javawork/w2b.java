import java.util.*;
class disc
{
    static int od(int a)
    {
        if(a%2!=0)
        {
            return 0;
        }
        else
        {
             return 1;
        }
    }
   static int prim(int a)
    {
        int i,k=0;
        for(i=2;i<a;i++)
        {
            if(a%i ==0)
            k++;
        }
        if(k==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    public static void main(String []args)
    {
        int i;
        int j=0;
        int a[] = new int[7];
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the numbers");
        for(i=0;i<7;i++)
        {
            a[i] = sc.nextInt();
        }
        for(i=0;i<7;i++)
        {
            if(od(a[i])==0 && prim(a[i])==0)
            {
                System.out.println(a[i]);
            }
            else j++;
        }
        if(j==7)
        {
            System.out.println("not found");
        }

    }
}
