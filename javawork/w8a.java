/* Write a program that reads file name from the user then displays information about 
that file, also read the contents from the file in byte stream to count the number of 
alphabets, numeric values, and special symbols. Write these statistics into another file 
using byte streams 
 */

import java.io.*;
import java.util.Scanner;

class demo21 
{  
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the file name");
        String fname = sc.next();
        try{
        FileInputStream fread = new FileInputStream(fname);
        FileOutputStream fout = new FileOutputStream("java2.txt");
        int alphabets =0, digits =0, special =0, data;
        while (fread.read() != -1) 
        {
            data = fread.read();
            if(Character.isLetter(data)){
                alphabets++;
            }
            if(Character.isDigit(data)){
                digits++;
            }
            else{
                special++;
            }
        }
        fread.close();
        String st = "alphabets:" + alphabets + "\ndigits" + digits + "\nspecial:" +special;
        byte[] bytes = st.getBytes();
        fout.write(bytes);
        alphabets =0;
        digits =0;
        special =0;
        fout.close();
        }
        catch(Exception e){
            System.out.println("something error");
        }
    }
}
