import java.util.*;
class demo21 {

public static void main(String[] args) {
Scanner sc = new Scanner(System.in);

try {
System.out.println("Enter Num1: ");
int num1 = Integer.parseInt(sc.nextLine());
System.out.println("Enter Num2: ");
int num2 = Integer.parseInt(sc.nextLine());

if (num2 == 0) {
throw new ArithmeticException("cannot divide by zero");
}

int result = num1 / num2;
System.out.println("result of " + num1 + " / " + num2 + " = " + result);

} catch (NumberFormatException e) {
    System.out.println("NumberFormatException:"+ e);        
    }
    catch(ArithmeticException a){
        System.out.println("Arthimatic exception:"+ a);
    }
    }
}