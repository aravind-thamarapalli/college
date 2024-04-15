import java.util.*;
class vehicle
{
    int type;

}
class brand extends vehicle
{
    String brand;

}
class cost extends brand
{
    int cost;
    
    void display()
    {
        System.out.println("\n this is " + type + "wheeler type");
        System.out.println("\n brand is" + brand);
        System.out.println("\n cost is " + cost);
    }
}
class multiinherit
{
    public static void main(String args[])
    {
        cost obj = new cost();
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the vehile type");
        obj.type=sc.nextInt();
        System.out.println("enter the brand ");
        obj.brand=sc.next();
        System.out.println("enter the cost");
        obj.cost= sc.nextInt();
        obj.display();
    }
} 
