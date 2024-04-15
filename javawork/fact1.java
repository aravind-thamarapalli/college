import java.util.*;
class fact1
{
public static int factrec( int n)
{
if(n==1)
return 1;
else 
return n*factrec(n-1);
}
static int factnonrec(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
System.out.println("enter the number");
int n=sc.nextInt();
System.out.println("Recursive Factorial:"+factrec(n));
System.out.println("Non-Recursive Factorial:"+factnonrec(n));

}
}
