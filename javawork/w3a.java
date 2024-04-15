class boxer 
{
    int len,bre,hei;
    boxer(int l,int b,int h)
    {
        len = l;
        bre = b;
        hei = h;
    }
    int vol()
    {
        return len*bre*hei;
    }
}
class boxd
{
    public static void main(String args[])
    {
        boxer b1 = new boxer(1,2,3);
        int v= b1.vol();
        System.out.println("volume:"+v);
    }
}
