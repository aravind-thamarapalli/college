class thr extends Thread{
    public void run(){
        System.out.println("Thread is created !!");
    }
}
class runc implements Runnable{
    public void run(){
        System.out.println("Runnable created");
    }
}

class demo33
{
    public static void main(String[] args) {
        runc t = new runc();
        thr t1 = new thr();
        t1.start();
        t.run();
    }
}