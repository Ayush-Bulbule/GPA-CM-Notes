import java.nio.Buffer;
import java.util.*;
// 19CM007 Ayush Shashikant Bulbule

/*PRACTICAL 13:  Write a program to implement array of objects. */
class Student {
    private String name;
    private int rol;

    public Student(int r,String n) {
        name = n;
        rol = r;
    }

    public void display() {
        System.out.println("\nName is: " + name);
        System.out.println("Roll no : " + rol);
    }

}

public class Practical13 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        Student[] studentsArry;

        studentsArry = new Student[3];

        studentsArry[0] = new Student(1010, "Rajesh");
        studentsArry[1] = new Student(1007, "Ayush");
        studentsArry[2] = new Student(1009, "");

        

        for (int i = 0; i < 2; i++) {
            System.out.println("\nDisplaying  Student " + (i+1));
            studentsArry[i].display();
        }

        sc.close();

    }
}
