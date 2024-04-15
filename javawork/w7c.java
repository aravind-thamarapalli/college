/*Create an employee class containing at least 3 details along with Id, setters, and getters. 
Insert the employee objects dynamically key as employee id and value as it’s 
corresponding object into a HashMap. Perform Id based search operation on the 
HashMap.  */

import java.util.*;

class emp{
    int id;
    String name;
    String dept;
    void setData(int id,String name,String dept){
        this.id =id;
        this.dept = dept;
        this.name = name;
    }

    void getData()
    {
        System.out.println("name "+ name);
        System.out.println("id "+ id);
        System.out.println("department "+ dept);
    }


}

class demo4{
    public static void main(String[] args) {
        HashMap <Integer, emp> empMap = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        emp e1 = new emp();
        emp e2 = new emp();
        emp e3 = new emp();
        e1.setData(101, "sai", "admin");
        empMap.put(e1.id,e1);
        e2.setData(202, "hari","source");
        empMap.put(e2.id,e2);
        e3.setData(303,"raghav","wastage");
        empMap.put(e3.id,e3);
        System.out.println("enter the employee to search");
        int ids = sc.nextInt();
        emp e = empMap.get(ids);
        if(e != null)
        {
            System.out.println("employee found:" + e.name);
            System.out.println("the employee details are");
            e.getData();
        }
        else
            System.out.println("employee not found to id," + ids); 
    }
}