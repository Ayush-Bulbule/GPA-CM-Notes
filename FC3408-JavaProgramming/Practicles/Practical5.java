public class Practical5 {
    // 19CM007 Ayush Shashikant Bulbule
    /*
     * Practical 5: Write a simple Java program to demonstrate use of command line
     * arguments in Java.
     */
    // Program to calculate area and perimeter of Rectangle using command line
    // arguments.

    public static void main(String[] args) {

        double l = Double.parseDouble(args[0]);
        double b = Double.parseDouble(args[1]);

        double area = l * b;
        double perimeter = 2 * (l + b);

        System.out.println("Area is: " + area);
        System.out.println("Perimeter is: " + perimeter);
    }
}