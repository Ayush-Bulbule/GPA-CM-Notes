
//19CM007 Ayush Shashikant Bulbule
/*
* Practical 9 : Develop programs to implement multilevel inheritance by applying various
* Access controls to its data members and methods.
*/
class Person {
    protected String name;
    protected int age;

    public void setData(String n, int a) {
        name = n;
        age = a;
    }

    public void display() {
        System.out.println("Name : " + name);
        System.out.println("Age: " + age);
    }
}

class Citizen extends Person {
    protected String Nat;

    public void setData(String n, int a, String nat) {
        setData(n, a);
        Nat = nat;
    }

    public void Display() {
        super.display();
        System.out.println("Nationality: " + Nat);
    }

}

class Employee extends Citizen {
    private int sal;
    private String role;

    public void setData(String n, int a, String nat, int s, String r) {
        setData(n, a, nat);
        sal = s;
        role = r;
    }

    public void display() {
        super.display();
        System.out.println("Salary: " + sal);
        System.out.println("Role: " + role);
    }

}

public class Practical9 {
    public static void main(String[] args) {

        Employee e1 = new Employee();
        Employee e2 = new Employee();

        e1.setData("Ayush", 22, "IND", 50000, "Developer");
        e1.display();

        e2.setData("James", 28, "USA", 80000, "Project Manager");
        e2.display();

    }

}