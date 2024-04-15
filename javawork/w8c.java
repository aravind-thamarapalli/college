import java.io.*;
import java.util.*;

class demo30 {

    public static void main(String[] args){
        System.out.println("enter the name of the file");
        Scanner sc = new Scanner(System.in);
        String str, str2;
        try{
        File f1 = new File("f1.txt");
         FileWriter w1=new FileWriter(f1);
            w1.write("is,as,was,are,this,those,these,that,were,has,have,had,been,to");
            w1.close();
         BufferedReader read1 = new BufferedReader(new FileReader(f1));
        BufferedReader read2 = new BufferedReader(new FileReader("java3.txt"));
        ArrayList<String>  stopWords=new ArrayList<String>();  
        ArrayList<String>  techWords=new ArrayList<String>(); 
        while (read1.readLine()!= null) {
            str = read1.readLine();
            System.out.println(str);
            for(String x:str.split(","))
                {
                    stopWords.add(x);
                }
        }
        while(read2.readLine()!= null){
            str2 = read2.readLine();
            for ( String y:str2.split(" ")){
                if(!stopWords.contains(y.toLowerCase())){
                    techWords.add(y);
                }
            }
        }
        read1.close();
        read2.close();
        Collections.sort(techWords);
        System.out.println(techWords);
         }catch(IOException e){
            System.out.println(e);
        }
    }
}
