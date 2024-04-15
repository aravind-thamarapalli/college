import java.util.*;
import pack1.student;
import pack2.sport;
class sport2 implements sport
{
    public void rating(int z)
    {
        System.out.println("student sports rating is"+z);
    }    
}
class report 
{
    public static void main(String[] args) 
    {
    student st = new student();
    System.out.println("enter the student name");
    Scanner sc=new Scanner(System.in);
    String x=sc.next();
    System.out.println("enter the roll no");
    int y=sc.nextInt();
    System.out.println("enter the sports rating");
    int z=sc.nextInt();
    sport2 sp = new sport2();
    st.name(x);
    st.rollno(y);
    sp.rating(z);
    }
}