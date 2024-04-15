interface a
{
    public void display();
}
interface b
{
    public void show();
}
class c implements a,b
{
    public void display()
    {
        System.out.println("implemented a");
    }
    public void show()
    {
        System.out.println("implements b");
    }
}
class impl
{
    public static void main(String[] args) {
        c ip = new c();
        ip.display();
        ip.show();        
    }
}