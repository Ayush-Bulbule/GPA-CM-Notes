import java.util.*;

public class Practical1 {
    // 19CM007 Ayush Shahsikant Bulbule
    /*
     * Practical No 1:Develop programs based on basic syntactical constructs of Java
     * like: Operators and expressions
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a Number: ");
        int a = sc.nextInt();

        System.out.println("Enter another Number: ");
        int b = sc.nextInt();

        sc.close();

        int add = a + b;
        int sub = a - b;
        int mult = a * b;
        int div = a / b;
        int div2 = a % b;

        System.out.println("Addition is: " + add);
        System.out.println("Subtraction is: " + sub);
        System.out.println("Multiplication is: " + mult);
        System.out.println("Division is: " + div);
        System.out.println("Division 2 is: " + div2);

    }
}
