import java.util.*;
class swap
{
public static void main(String args[])
{
 Scanner sc= new Scanner(System.in);
int a=sc.nextInt();
int b=sc.nextInt();
System.out.println("before swapping "+a+" "+b);
int c=a;
a=b;
b=c;
System.out.println("after swapping "+a+" "+b);
}
}