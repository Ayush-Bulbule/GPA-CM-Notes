import java.util.Scanner;

// 19CM007 Ayush Shashikant Bulbule
/* 
*  Practical 6:Develop programs on Constructor 
*  and Constructor overloading.
*/
class Reactangle {
    int l, b;

    public Reactangle(int l) { // constructor-1
        this.l = this.b = l;
    }

    public Reactangle(int l, int b) {
        this.l = l;
        this.b = b;
    }

    public int area() {
        return (l * b);
    }

    public int perimeter() {
        return (2 * (l + b));
    }

}

public class Practical6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter length and bredth of rectangle: ");
        int l = sc.nextInt();
        int b = sc.nextInt();

        System.out.println("Enter the length of Square: ");
        int s = sc.nextInt();

        Reactangle r1 = new Reactangle(l, b);// crating frist obj
        System.out.println("Area of Reactangle is: " + r1.area());
        System.out.println("Perimeter of Reactangle is: " + r1.perimeter());
        System.out.println();

        Reactangle r2 = new Reactangle(s);// crating frist obj
        System.out.println("Area of Square is: " + r2.area());
        System.out.println("Perimeter of Square is: " + r2.perimeter());

    }
}