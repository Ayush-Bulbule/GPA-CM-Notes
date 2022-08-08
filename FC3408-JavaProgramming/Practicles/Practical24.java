/* Programs to demonstrate use of File streams. */
//19CM007 Ayush Shashikant Bulbule
import java.io.*;
import java.util.concurrent.ExecutionException;

class Person implements Serializable {

  private String N;
  private int A;

  public Person(String n, int a) {
    N = n;
    A = a;
  }

  public void display() {
    System.out.println("Name: " + N);
    System.out.println("Age: " + A);
  }
}

public class Practical24 {

  public static void main(String[] args) {
    //Write a program to save and read objects from a file.
    Person a = new Person("Ayush", 24);
    Person b = new Person("Ram", 20);

    System.out.println("Writing  Data to file...");

    try {
      FileOutputStream fout = new FileOutputStream("C:/Java/person.txt");
      ObjectOutputStream os = new ObjectOutputStream(fout);

      os.writeObject(a);
      os.writeObject(b);

      fout.close();
      os.close();

      System.out.println("Object Saved!");
    } catch (Exception ex) {
      ex.printStackTrace();
    }

    System.out.println("\n\nReading Data from file...");
    System.out.println("Displaying Data");
    try {
      FileInputStream fin = new FileInputStream("C:/Java/person.txt");
      ObjectInputStream os = new ObjectInputStream(fin);

      Person p = (Person) os.readObject();
      Person q = (Person) os.readObject();
      os.close();
      fin.close();

      p.display();
      q.display();
    } catch (Exception ex) {
      ex.printStackTrace();
    }
  }
}
