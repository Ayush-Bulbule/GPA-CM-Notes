
//19CM007 Ayush Shashikant Bulbule
/*
 * Practical 10 : Develop programs to implement inheritance and demonstrate use of method
 * Overriding.
 */
class Unit {
    public void display() {
        System.out.println("This is Dsiplay Function From Class Unit");
    }
}

class Time extends Unit {
    private int hh, mm;

    public void setTime(int h, int m) {
        hh = h;
        mm = m;
    }

    public void display() {
        System.out.println("Time is : " + hh + " hours and " + mm + " minutes");
    }

    public void converTime() {
        System.out.println("Total Time in Minutes: " + ((hh * 60) + mm) + " minutes");
    }
}

public class Practical10 {
    public static void main(String[] args) {
        Time t = new Time();
        t.setTime(8, 40);
        t.display();
        t.converTime();

    }

}
