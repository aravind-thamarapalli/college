interface A
{
    void area(int l,int b);
    void peri();
}
class shaped implements A
{
    int l,b;
    shaped(int l,int b)
    {
        this.l=l;
        this.b=b;
    }
    void area(int l,int b)
    {
        System.out.println("area"+(2*(l+b)));
    }
    void peri()
    {

    }
}
