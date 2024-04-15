/*) Accept an array of strings and display the number of vowels and consonants occurred in 
each string. 
 */
import java.util.*;
 class str
{
    public static void main(String[] arg)
    {
        int i,v=0,l;
        Scanner sc= new Scanner(System.in);
        String a = sc.next();
        String b = "aeiouAEIOU";
        l=a.length();
    for(i=0;i<a.length();i++)
    for(int j=0;j<10;j++){
        if(a.charAt(i)==b.charAt(j))
            {
                v++;
                break;
            }                     
        }
        System.out.println("vowels:"+v);
        System.out.println("consonents:"+(l-v));
    }
}