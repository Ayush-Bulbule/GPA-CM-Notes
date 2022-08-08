import java.util.Scanner;

import Operations.Arithmetic;

public class Practical18 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n1,n2;

        
        System.out.println("Enter num 1: ");
        n1 = sc.nextInt();

        System.out.println("Enter num 2: ");
        n2 = sc.nextInt();


        Arithmetic arithmetic = new Arithmetic(n1,n2);

        System.out.println("Addition is: "+arithmetic.add());

        System.out.println("Subtraction is: "+arithmetic.sub());

        System.out.println("Multiplication is: "+arithmetic.mult());
        
        System.out.println("Division is: "+arithmetic.div());
    
        sc.close();
    }
    
}
