import java.util.*;
class fibonacci
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=0,a=0,b=1,c;
System.out.println(a);
System.out.println(b);
for(i=0;i<=n;i++)
{
c=a+b;
System.out.println(c);
a=b;
b=c;
}}}
