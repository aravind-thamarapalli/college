import java.util.*;
class lexi
{
    public static void main(String args[])
    {
        int i=0,j=0,st,end;
        String temp;
        Scanner sc = new Scanner(System.in);
        System.out.println("\n input a string");
        String x = sc.nextLine();
        System.out.println("\n enter the length of substrings");
        int n = sc.nextInt();
        int y = x.length();
        int r = y/n;
        String[] s = new String[r];
        st=0;
        end=n;
        while(i<r)
        {
            s[i]=x.substring(st,end);
            st=end;
            end=st+n;
            i++;
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                if(s[i].compareTo(s[j])<0)
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        for(i=0;i<r;i++)
        {
            System.out.println(s[i]);
        }
    }
}