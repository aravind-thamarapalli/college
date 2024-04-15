import java.util.*;
class rect 
{
    int l,b,p,a;
    int area()
    {
        return a=l*b;
    }
    int peri()
    {
        return p=2*(l+b);
    }
}

public class rectangle
{
    public static void main (String args[])
    {
        rect rc= new rect();
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the parameter of the rectangle");
        rc.l=sc.nextInt();
        rc.b=sc.nextInt();
        System.out.println("Area:"+ rc.area());
        System.out.println("Perimeter:"+ rc.peri());
    }
}