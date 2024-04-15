import java.util.*;
class prime
{
    public static void main(String a[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i,j;
        for(i=2;i<=n;i++)
        {
            int k=0;
            for(j=2;j<i;i++)
            {
                if(i%j==0)
                k=0;
                else k++;
            }
            if(k==0)
            System.out.println(i);
        }
    }
}