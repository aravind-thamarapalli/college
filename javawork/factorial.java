import java.util.*;
class factorial
{
public static void main(String a[])
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i,f=1;
for(i=2;i<=n;i++)
{
f*=i;
}
System.out.println(f);
}}