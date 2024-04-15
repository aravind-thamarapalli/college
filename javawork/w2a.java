class demo
{
    int l=5,b=5,h=5;
    demo()
    {
        System.out.println("This is default constructor");
    }
    demo(int len,int bre,int hei)
    {
        l=len;
        b=bre;
        h=hei;
    }
    void display()
    {
        System.out.println("volume is "+(l*b*h));
    }
}
class shape
{
    public static void main(String []args)
    {
        demo d1 = new demo();
        demo d2 = new demo(2,3,4);
        d1.display();
        d2.display();
    }
}
