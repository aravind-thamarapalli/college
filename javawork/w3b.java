import java.lang.Math;
 class Calculator
 {
    int powerInt (int num1,int num2)
    {
        int i,k=1;
        for(i=1;i<=num2;i++)
        k=num1*k;
        return (k);
    }
    double powerDouble(double num1,double num2)
    {
        return (Math.pow(num1, num2));
    }
 }
 class disc
 {
    public static void main(String args[])
 {
    Calculator cal =new Calculator();
    int l=cal.powerInt(9, 2);
    double m=cal.powerDouble(8, 2);
    System.out.println(l);
    System.out.println(m);

 }
}