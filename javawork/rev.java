import java.util.*;
class rev
{
public static void main(String a[])
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int rev=0,k=0;
while(n!=0)
{
k=n%10;
rev=rev*10+k;
n/=10;
}
System.out.println(rev);
}}