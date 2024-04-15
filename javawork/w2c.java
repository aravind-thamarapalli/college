import java.util.Scanner;

class frequency 
{
    public static void main(String args[])
    {
        int i,j,val,freq;
        Scanner sc = new Scanner(System.in);
        int a[] = new int[10];
        System.out.println("enter the array elements");
        for(i=0;i<10;i++)
        {
            a[i] = sc.nextInt();
        }
        
        for(i=0;i<10;i++)
        {
            val=a[i];
            if(val ==-1)
            {
                continue;
            }
            freq =1;
            for(j=i+1;j<10;j++)
            {
                if(val == a[j])
                {
                    freq++;
                    a[j] = -1;
                }
            }
            System.out.println("value: "+val+"frequency: "+freq);
        }
    }
    
}
