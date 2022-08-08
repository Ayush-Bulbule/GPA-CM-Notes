
//AIM : Hostel Management System in Java
/* 
19CM003 : Mrs. Bhagyashree Tekade
19CM007 : Mr. Ayush Bulbule
19CM020 : Mr. Pratham Gaur
19CM033 : Mr. Malhar Joshi
19CM057 : Mrs. Akansha Shewatkar 
 */

import java.io.*;
import java.util.Scanner;
import java.util.Vector;

class Student implements Serializable {
    public String id;
    public String name;
    public String dep;
    public int sem;
    public int age;
    public String dob;
    public double paidFees;
}

class Room implements Serializable {
    public int roomNumber;
    public boolean allotted;
    Student student = new Student();

    public Room(int roomNumber, boolean allotted) {
        this.roomNumber = roomNumber;
        this.allotted = allotted;
    }

    public void displayRoom() {
        System.out.println("Room No: " + roomNumber);
        System.out.println("Alloted? :" + allotted);
    }

    public void displayDetails() {
        System.out.println("Student Id: " + student.id);
        System.out.println("Student Name: " + student.name);
        System.out.println("Department: " + student.dep);
        System.out.println("Semester: " + student.sem);
        System.out.println("Age: " + student.age);
        System.out.println("Room No: " + roomNumber);
    }

}

public class HostelManagement {
    private static final int MAX = 80;
    public static final int FEES = 3000;
    public static Vector<Room> roomsVector = new Vector<>(MAX);

    @SuppressWarnings("unchecked")
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int opt, i;

        File f = null;
        FileInputStream fis = null;
        ObjectInputStream ois = null;
        FileOutputStream fos = null;
        ObjectOutputStream oos = null;

        try {
            f = new File("C:/HostelManagement/HostelData.dat");

            if (f.exists()) {
                fis = new FileInputStream(f);
                ois = new ObjectInputStream(fis);
                roomsVector = (Vector<Room>) ois.readObject();
            } else {
                f.createNewFile();
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }

        do {
            cls();
            System.out.println("########## HOSTEL MANAGEMENT SYSTEM ##########");
            System.out.println("Project By: 19CM003, 19CM007, 19CM020, 19CM033 and 19CM057");
            System.out.println("1. Manage Rooms");
            System.out.println("2. Manage Students");
            System.out.println("3. Available Rooms");
            System.out.println("4. Search Student");
            System.out.println("5. Display Students");
            System.out.println("6. Student with Unpaid Fees");
            System.out.println("7. EXIT");

            System.out.println("\nEnter Your Option: ");
            opt = sc.nextInt();

            switch (opt) {
                case 1:
                    manageRooms();
                    sc.nextLine();
                    break;

                case 2:
                    if (roomsVector.isEmpty()) {
                        System.out.println("Room Data Not Available!!");
                        System.out.println("Please Add Rooms First!");
                    } else {
                        manageStudents();
                        break;
                    }
                    sc.nextLine();
                    break;

                case 3:
                    i = 1;
                    if (roomsVector.isEmpty()) {
                        System.out.println("No Student added!!");
                        System.out.println("Please Add Rooms First!");
                    } else {
                        int found = 0;
                        for (Room r : roomsVector) {
                            if (!r.allotted) {
                                System.out.println(i + ") Room No: " + r.roomNumber);
                                System.out.println();
                                found++;
                                i++;
                            }
                        }
                        if (found == 0) {
                            System.out.println("All Rooms are Allotted!");
                            sc.next();
                        }
                        sc.nextLine();
                    }
                    sc.nextLine();
                    break;

                case 4:
                    if (roomsVector.isEmpty()) {
                        System.out.println("No Student added!!");
                        System.out.println("Please Add Rooms Frist!");
                    } else {
                        System.out.println("Enter Student Id: ");
                        sc.nextLine();
                        String id = sc.nextLine();
                        int found = 0;
                        if (roomsVector.isEmpty()) {
                            System.out.println("Student Details Not Available");
                        } else {
                            for (Room r : roomsVector) {
                                if (id.equals(r.student.id)) {
                                    System.out.println("\n\nSearch Results: \n");
                                    r.displayDetails();
                                    found++;
                                }
                            }
                            sc.nextLine();
                        }
                        if (found == 0) {
                            System.out.println("Student Not Found!!");
                        }
                        sc.nextLine();
                    }
                    sc.nextLine();
                    break;

                case 5:
                    i = 1;
                    if (roomsVector.isEmpty()) {
                        System.out.println("Student Details Not Available");
                    } else {
                        for (Room r : roomsVector) {
                            if (r.allotted) {
                                System.out.println("\n\nSerial No: " + i);
                                r.displayDetails();
                                i++;
                            }
                        }
                        sc.nextLine();
                    }
                    sc.nextLine();
                    break;

                case 6:
                    i = 1;

                    if (roomsVector.isEmpty()) {
                        System.out.println("Student Details Not Available");
                    } else {
                        for (Room r : roomsVector) {
                            if (r.student.paidFees != FEES && r.allotted) {
                                System.out.println("\n\nSerial No: " + i);
                                System.out.println("Student Id: " + r.student.id);
                                System.out.println("Student Name: " + r.student.name);
                                System.out.println("Room Id: " + r.roomNumber);
                                System.out.println("REMAINING FEES: " + (FEES - r.student.paidFees));
                                i++;
                            }

                        }
                        sc.nextLine();
                    }
                    sc.nextLine();
                    break;

                case 7:
                    try {
                        fos = new FileOutputStream(f);
                        oos = new ObjectOutputStream(fos);
                        oos.writeObject(roomsVector);
                    } catch (Exception ex) {
                        ex.printStackTrace();
                    } finally {
                        try {
                            fis.close();
                            ois.close();
                            fos.close();
                            oos.close();
                            sc.close();
                        } catch (Exception e1) {
                            e1.printStackTrace();
                        }
                    }

                    System.out.println("\n You Choose To EXIT!! All are saved!");
                    System.out.println("########## Thanks for Using ###########");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Please Enter correct Option: ");
                    break;

            }
        } while (opt != 7);
    }

    private static void manageRooms() {
        Scanner sc = new Scanner(System.in);
        int ch;
        int rno;

        do {
            cls();
            System.out.println("####### Manage Rooms #######");
            System.out.println("Enter 1: Add Room");
            System.out.println("Enter 2: Search Room");
            System.out.println("Enter 3: Back To Main menu");

            System.out.println("\nEnter Your Choise: ");
            ch = sc.nextInt();

            switch (ch) {
                case 1:
                    int found = 0;
                    System.out.println("Enter room no: ");
                    rno = sc.nextInt();
                    for (Room r : roomsVector) {
                        if (rno == r.roomNumber) {
                            found++;
                        }
                    }
                    if (found != 0) {
                        System.out.println("Room is Already Added!!");
                        sc.nextLine();
                        sc.nextLine();
                    } else {
                        roomsVector.add(new Room(rno, false));
                        System.out.println("Room Added Successfully!!");
                        sc.nextLine();
                        System.out.println(roomsVector);
                        sc.nextLine();
                    }
                    break;
                case 2:
                    found = 0;
                    System.out.println("Enter room no: ");
                    rno = sc.nextInt();
                    for (Room r : roomsVector) {
                        if (rno == r.roomNumber) {
                            System.out.println("Room Details: ");
                            if (r.allotted) {
                                System.out.println("Room is reserved!!");
                                sc.nextLine();

                            } else {
                                System.out.println("Room is Available");
                                sc.nextLine();

                            }
                            r.displayRoom();
                            found++;
                        }
                    }
                    sc.nextLine();
                    if (found == 0) {
                        System.out.println("Room Not found!!");
                        sc.nextLine();
                    }
                    sc.nextLine();
                    break;
                case 3:

                    break;
                default:
                    System.out.println("Select Correct Option!!");
                    sc.nextLine();
            }

        } while (ch != 3);
    }

    private static void manageStudents() {
        Scanner sc = new Scanner(System.in);

        int ch;
        int rno;

        do {
            cls();
            System.out.println("####### Manage Students #######");
            System.out.println("Enter 1: Enroll Student");
            System.out.println("Enter 2: Edit Student");
            System.out.println("Enter 3: Delete Student");
            System.out.println("Enter 4: Back To Main menu");

            System.out.println("\nEnter Your Choise: ");
            ch = sc.nextInt();
            String id;

            switch (ch) {
                case 1:
                    int found = 0;
                    System.out.println("Enter room no: ");
                    rno = sc.nextInt();
                    for (Room r : roomsVector) {
                        if (r.roomNumber == rno) {
                            if (r.allotted) {
                                System.out.println("Room not Available! Already Allotted!");
                                sc.nextLine();
                            } else {
                                System.out.println("Room Available ");
                                sc.nextLine();
                                System.out.println("\nEnter Student Details: \n");
                                System.out.println("Enter Student Id: ");
                                r.student.id = sc.nextLine();
                                System.out.println("Enter Student Name: ");
                                r.student.name = sc.nextLine();
                                System.out.println("Enter Student age: ");
                                r.student.age = sc.nextInt();
                                sc.nextLine();
                                System.out.println("Enter Department: ");
                                r.student.dep = sc.nextLine();
                                System.out.println("Enter Semester: ");
                                r.student.sem = sc.nextInt();
                                sc.nextLine();
                                System.out.println("Enter Student DOB: ");
                                r.student.dob = sc.nextLine();
                                System.out.println("Enter Fees Paid: ");
                                r.student.paidFees = sc.nextDouble();
                                r.allotted = true;

                                System.out.println("Student added Success!");
                                sc.nextLine();
                                found++;
                            }
                        }
                    }

                    if (found == 0) {
                        System.out.println("No such Room! Add Room First!");
                        sc.nextLine();
                    }
                    break;
                case 2:
                    found = 0;
                    sc.nextLine();
                    System.out.println("Enter Student Id: ");
                    id = sc.nextLine();
                    for (Room r : roomsVector) {
                        if (id.equals(r.student.id)) {
                            System.out.println("\nCurrent Student Data:\n");
                            r.displayDetails();
                            System.out.println("Enter new Data to edit: ");

                            System.out.println("Enter Student Id: ");
                            r.student.id = sc.nextLine();
                            System.out.println("Enter Student Name: ");
                            r.student.name = sc.nextLine();
                            System.out.println("Enter Student age: ");
                            r.student.age = sc.nextInt();
                            sc.nextLine();
                            System.out.println("Enter Department: ");
                            r.student.dep = sc.nextLine();
                            System.out.println("Enter Semester: ");
                            r.student.sem = sc.nextInt();
                            sc.nextLine();
                            System.out.println("Enter Student DOB: ");
                            r.student.dob = sc.nextLine();
                            System.out.println("Enter Fees Paid: ");
                            r.student.paidFees = sc.nextDouble();
                            r.allotted = true;

                            System.out.println("Student Edited Successfully!");
                            sc.nextLine();
                            found++;
                            break;
                        }
                    }
                    if (found == 0) {
                        System.out.println("Student not found!");
                        sc.nextLine();
                    }
                    sc.nextLine();
                    break;
                case 3:
                    found = 0;
                    System.out.println("Enter Student Id to Delete: ");
                    sc.nextLine();
                    id = sc.nextLine();
                    for (Room r : roomsVector) {
                        if (id.equals(r.student.id)) {
                            r.student.id = null;
                            r.student.name = null;
                            r.student.age = 0;
                            r.student.sem = 0;
                            r.student.paidFees = 0;
                            r.student.dep = null;
                            r.student.dob = null;
                            r.allotted = false;
                            found++;
                            break;
                        }
                    }
                    if (found == 0) {
                        System.out.println("No such Student");
                    }
                    System.out.println("Student Removed!!");
                    sc.nextLine();
                    break;
                case 4:

                    break;
                default:
                    System.out.println("Select Correct Option!!");
                    sc.nextLine();
            }

        } while (ch != 4);
    }

    // TO clear screen
    public static void cls() {
        try {
            if (System.getProperty("os.name").contains("Windows"))
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
        } catch (IOException | InterruptedException ex) {
            ex.printStackTrace();
        }
    }

}
