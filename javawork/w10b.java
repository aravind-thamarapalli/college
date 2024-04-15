class Number
{
    synchronized public void even(int n)
    {
        for(int i=0;i<=n;i++)
        {
            if(i%2==0)
            {
                System.out.println(i);
            }
        }
    }
}
class One extends Thread
{
    Number nu1 = new Number();
    public void run()
    {
        nu1.even(10);
    }
}
class Two extends Thread
{    
    Number nu = new Number();
    public void run()
    {
        nu.even(20);
    }
}
class ThreadSynchronization extends Thread
{
    public static void main(String[] args) 
    { 
        One o=new One();
        Two t=new Two();
        System.out.println(Thread.currentThread());
        o.start();
        t.start();
    }
}