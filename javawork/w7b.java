//Write a program to implement a new ArrayList class. It should contain add(), get(), 
//remove(), size() methods. Use dynamic array logic. 
import java.util.*;
class demo3{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> str = new ArrayList<>();
        System.out.println("enter the size of the list");
        int n = sc.nextInt();
        System.out.println("enter the elements into a array list");
        for (int i = 0; i < n; i++) {
            String stri =sc.next();
            str.add(stri);
        }
        for(int i=0;i<n;i++){
        System.out.println(str.get(i));
        }
        System.out.println("the size of arraylist before removing is " + str.size());
        System.out.println("enter the position to rmeove the element");
        int del = sc.nextInt();
        str.remove(del);
        System.out.println("After deletion of element array list be " + str);
    }
}