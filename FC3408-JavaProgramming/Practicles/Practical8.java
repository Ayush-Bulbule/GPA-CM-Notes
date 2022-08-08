
//19CM007 Ayush Shashikant Bulbule.
/*
* Practical 8 : Write a program to implement single inheritance by applying various access
* Controls to its data members and methods.
*/
//Single Inheritance class Box Derived from class Reactangle.
class Rectangle {
    protected int l, b;

    public void setData(int L, int B) {
        l = L;
        b = B;
    }

    public void display() {
        System.out.println("Length is: " + l);
        System.out.println("Breadth is : " + b);
    }

    public int area() {
        return (l * b);
    }

}

class Box extends Rectangle {
    private int h;

    public void setData(int L, int B, int H) {
        setData(L, B);
        h = H;
    }

    public void display() {
        super.display();
        System.out.println("Height is : " + h);
    }

    public int volume() {
        return (l * b * h);
    }

}

public class Practical8 {
    public static void main(String[] args) {

        Rectangle r1 = new Rectangle();

        r1.setData(20, 30);
        r1.display();
        System.out.println("Area of Rectangle is: " + r1.area());

        Box b1 = new Box();

        b1.setData(20, 30, 10);
        b1.display();
        System.out.println("Volume of Box is:" + b1.volume());

    }

}