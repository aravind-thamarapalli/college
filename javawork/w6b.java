//Write a program that accepts values of different data types and convert them to 
//corresponding wrapper classes and display using the vector 
import java.util.Vector;
class demo1{
    public static void main(String[] args) {
        int a=5;
        double b=1.2;
        byte c=1;
        char d='a';

        Integer a1 = Integer.valueOf(a);
        Double b1 = Double.valueOf(b);
        Byte c1 = Byte.valueOf(c);
        Character d1 = Character.valueOf(d);
        Vector<Object> vec = new Vector<Object>();
        vec.add(a1);
        vec.add(b1);
        vec.add(c1);
        vec.add(d1);
        System.out.println(vec.get(0));
        System.out.println(vec.get(1));
        System.out.println(vec.get(2));
        System.out.println(vec.get(3));
    }
}