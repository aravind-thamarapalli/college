/*) a) Write a program that creates 3 threads by extending the Thread class. First thread 
displays “Good Morning” every 1 sec, the second thread displays “Hello” every 2 
seconds and the third displays Welcome” every 3 seconds. (Repeat the same by 
implementing Runnable).  */
class thr4 implements Runnable{
    public void run(){
        try{
            Thread.sleep(1000);
        }catch(InterruptedException e){
            System.out.println(e);
        }
    System.out.println("Good Morning");
    }
}
class thr5 implements Runnable{
    public void run(){
        try{
            Thread.sleep(2000);
        }catch(InterruptedException eb){
            System.out.println(eb);
        }
    System.out.println("Hello");
    }
}
class thr6 implements Runnable{
    public void run(){
        try{
            Thread.sleep(3000);
        }catch(InterruptedException en){
            System.out.println(en);
        }
        System.out.println("Welcome");
    }
}
class demo34
{
    public static void main(String[] args) {
        thr4 t4 = new thr4();
        thr5 t5 = new thr5();
        thr6 t6 = new thr6();
        t4.run();
        t5.run();
        t6.run();
    }
}