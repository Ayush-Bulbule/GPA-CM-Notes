import java.util.Scanner;

public class Practical4 {
    // 19CM007 Ayush Shashikant Bulbule
    /*
     * Practical No 4: Develop programs based on basic syntactical constructs of
     * Java like: Type casting
     */
    // Program to typcast int value to other datatypes:

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter an integer to Typecast: ");
        int i = sc.nextInt();

        System.out.println("You Entered: " + i);

        System.out.println("Typecaste to char:   " + (char) i);
        System.out.println("Typecaste to byte:   " + (byte) i);
        System.out.println("Typecaste to short:  " + (short) i);
        System.out.println("Typecaste to float:  " + (float) i);
        System.out.println("Typecaste to double: " + (double) i);

        sc.close();
    }

}
