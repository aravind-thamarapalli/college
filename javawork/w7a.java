//Write a program to generate a set of random numbers between two numbers x1 and x2, 
//and x1>0. 
import java.util.Random;
import java.util.*;
class demo2{
    public static void main(String[] args) {
        Random ran =new Random();
        int i,x1,x2;
        System.out.println("enter the origin and bounds\n");
        Scanner sc = new Scanner(System.in);
        x1 = sc.nextInt();
        x2 = sc.nextInt();
        int [] arr = new int[10];
        if(x1>0){
        for (i=0;i<10;i++) {
            arr[i] = ran.nextInt(x1,x2);            
        }
        for (i=0;i<10;i++) {
            System.out.println(arr[i]);   
        }}
        else System.out.println("enter the origin greater than zero");

        sc.close();
    }
}
