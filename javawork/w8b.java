import java.io.*;
import java.util.*;
class SuperMarket
{
    int ProductId;
    String Name;
    double Cost;
    int Quantity;
    double revenue;
    SuperMarket(int id,String name,double cost,int quantity)
    {
        ProductId=id;
        Name=name;
        Cost=cost;
        Quantity=quantity;
        revenue=cost*quantity;
    }
}
public class w8b
{
    public static void main(String[] args) {
        File f=new File("supermarket.csv");
        try
        {
            double TotalRevenue=0;
            FileWriter w=new FileWriter(f);
            SuperMarket s[]=new SuperMarket[3];
            s[0]=new SuperMarket(101,"Apple",50,35);
            s[1]=new SuperMarket(102,"Banana",20,55);
            s[2]=new SuperMarket(103,"Orange",30,65);
            Double a[]=new Double[3];
            for(int i=0;i<3;i++)
            {
                w.write(s[i].ProductId+", "+s[i].Name+", "+s[i].Cost+", "+s[i].Quantity+"\n");
                a[i]=s[i].revenue;
                TotalRevenue+=a[i];
            }
            w.close();
            System.out.println("Total revenue of super market:"+TotalRevenue);
            System.err.println();
            Arrays.sort(a,Comparator.reverseOrder());
            for(Double i:a)
            {
                for(SuperMarket j:s)
                {
                    if (i==j.revenue)
                    {
                        System.out.println("ProductID:"+j.ProductId);
                        System.out.println("Name:"+j.Name);
                        System.out.println("Cost:"+j.Cost);
                        System.out.println("Quantity:"+j.Quantity);
                        System.out.println("Revenue:"+j.revenue);
                        System.err.println();
                    }
                }
            }
        }
        catch (IOException e)
        {
            e.printStackTrace();
        }
    }
}