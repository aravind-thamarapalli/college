import java.io.*;
import java.util.*;
class stopwords
{
    public static void main(String[] args) {
        File f=new File("Tech.txt");
        File f1=new File("StopWords.txt");
        try
        {
            FileWriter w1=new FileWriter(f1);
            String data="Hi there this is aravind";
            w1.write("is,as,was,are,this,those,these,that,were,has,have,had,been,to");
            w1.close();
            String str; 
            BufferedReader r1=new BufferedReader(new FileReader(f1)); 
            ArrayList<String>  stopWords=new ArrayList<String>();  
            ArrayList<String>  techWords=new ArrayList<String>(); 
            while((str=r1.readLine())!=null)
            {
                for(String x:str.split(","))
                {
                    stopWords.add(x);
                }
            } 
            for(String x:data.split(" "))
            {
                if(!stopWords.contains(x.toLowerCase())) 
                {
                    techWords.add(x);
                }
            }
            r1.close(); 
            Collections.sort(techWords); 
            FileWriter w=new FileWriter(f); 
            for(String word:techWords)  
            {  
                w.write(word+"\n");  
            }  
            w.close();
            BufferedReader r=new BufferedReader(new FileReader(f));
            while((str=r.readLine())!=null)
            {
                System.out.println(str);
            }
            r.close();
        }
        catch (IOException e)
        {
            e.printStackTrace();
        }
    }
}