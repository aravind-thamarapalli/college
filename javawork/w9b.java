import java.util.Scanner;
class myException extends Exception{
    public myException(String s)
    {
        super(s);
    }
}

class demo27
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the age");
        int age = sc.nextInt();
        try{
                if(age<18)
                {
                    throw new myException("");
                }
                else {
                    System.out.println("eligible to vote");
                }
        }catch(myException ex){
            System.out.println("caught an exception");
            System.out.println("not eligible to vote");
        }
    }
}