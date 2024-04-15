/*) a) Write a program that creates 3 threads by extending the Thread class. First thread 
displays “Good Morning” every 1 sec, the second thread displays “Hello” every 2 
seconds and the third displays Welcome” every 3 seconds. (Repeat the same by 
implementing Runnable).  */
class thr1 extends Thread{
    public void run(){
        try{
            Thread.sleep(1000);
        }catch(InterruptedException e){
            System.out.println(e);
        }
    System.out.println("Good Morning");
    }
}
class thr2 extends Thread{
    public void run(){
        try{
            Thread.sleep(2000);
        }catch(InterruptedException eb){
            System.out.println(eb);
        }
    System.out.println("Hello");
    }
}
class thr3 extends Thread{
    public void run(){
        try{
            Thread.sleep(3000);
        }catch(InterruptedException en){
            System.out.println(en);
        }
        System.out.println("Welcome");
    }
}
class demo32
{
    public static void main(String[] args) {
        thr1 t1 = new thr1();
        thr2 t2 = new thr2();
        thr3 t3 = new thr3();
        t1.start();
        t2.start();
        t3.start();
    }
}