import java.util.*;

public class Practical2 {
    // 19CM007 Ayush Shahsikant Bulbule
    /*
     * Practical No 2: Develop programs based on basic syntactical constructs of
     * Java like: Looping statement.
     */
    // Program to print pattern
    public static void main(String[] args) {

        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            System.out.println();
        }

    }
}
