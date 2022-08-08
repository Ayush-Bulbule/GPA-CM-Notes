import java.util.*;

//19CM007 Ayush Shashikant Bulbule
/*Practical 7: Develop programs on Methods overloading.  */
//Program to find area of circle with radius of type int and double.

class Circle {
    double r;

    public void setRadius(int r) {
        this.r = r;
    }

    public void setRadius(double r) {
        this.r = r;
    }

    double area() {
        return (3.14 * r * r);
    }

    double circumference() {
        return (2 * 3.14 * r);
    }
}

public class Practical7 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Circle c1 = new Circle();
        Circle c2 = new Circle();

        System.out.println("Enter Radius of c1: ");
        int r1 = sc.nextInt();

        System.out.println("Enter Radius of c2:");
        double r2 = sc.nextDouble();

        c1.setRadius(r1);
        c2.setRadius(r2);

        System.out.println("Area of circle c1: " + c1.area());
        System.out.println("CircumferenceS of circle c1: " + c1.circumference());

        System.out.println("Area of circle c2: " + c2.area());
        System.out.println("CircumferenceS of circle c2: " + c2.circumference());

        sc.close();
    }

}
