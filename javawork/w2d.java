import java.util.Scanner;
class finance
{
    public static void main(String args[])
    {
        int m,n,lar,i,j;
        Scanner sc = new Scanner(System.in);
        m=sc.nextInt();
        n=sc.nextInt();
        int[][] a = new int[m][n];
        System.out.println("enter financial years:");
        for(i=1;i<m;i++)
        {
            a[i][0]=sc.nextInt();
        }
        System.out.println("enter ID'S:");
        for(j=1;j<n;j++)
        {
            a[0][j]=sc.nextInt();
        }
        System.out.println("enter sales:");
        for(i=1;i<m;i++)
        {
            for(j=1;j<n;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        lar=a[1][1];
        for(i=1;i<m;i++)
        {
            for(j=1;j<n;j++)
            {
                if(a[i][j]>lar)
                {
                    lar=a[i][j];
                }
            }
        }
        for(i=1;i<m;i++)
        {
            for(j=1;j<n;j++)
            {
                if(a[i][j]==lar)
                {
                    System.out.println(lar + "is highest in the financial year : " + a[i][0] + "with ID is : " + a[0][j]);
                }
            }
        }
    }
}    