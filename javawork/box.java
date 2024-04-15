import java.util.*;
class boxes
{
int l,b,h;
int v;
int vol()
{
return v=l*b*h;
}
}
public class box
{
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
boxes bo = new boxes();
System.out.println("enter the dimensions");
bo.l = sc.nextInt();
bo.b = sc.nextInt();
bo.h = sc.nextInt();
System.out.println("Volume of the box be "+bo.vol());
}
}