import java.util.Scanner;

public class Practical3 {
    // 19CM007 Ayush Shashikant Bulbule
    /*
     * Practical No 3: Develop programs based on basic syntactical constructs of Java like: Decision
     * making statements
     */
    // Program to calculate Grade from entered persentage
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Your Persentage to Calculate Grade: ");
        double per = sc.nextDouble();
        sc.close();

        if (per >= 75) {
            System.out.println("You are Passed in Distinction!!");
        } else {
            if (per >= 60) {
                System.out.println("You are passed in '1st Division'");
            } else if (per >= 50) {
                System.out.println("You are passed in '2nd Division'");
            } else if (per >= 40) {
                System.out.println("You are passed in '3rd Division'");
            } else {
                System.out.println("You are Failed");
            }
        }

    }
}
