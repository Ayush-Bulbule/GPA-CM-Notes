/*
Author -19CM007 Ayush Shashikant Bulbule
Practical No 3: Write a Program in java to create a JTable.
*/

import javax.swing.*;

class Frame extends JFrame {
  private JTable j;
  public Frame() {
    super("Orange cap");
    String data[][] = {
      { "302", "KL Rahul", "KXIP" },
      { "282", "Faf du Plessis", "CSK" },
      { "272", "Mayank Agarwal", "KXIP" },
      { "211", "Rohit sharma", "MI" },
      { "181", "Shreyas Iyer", "DC" },
    };
    String cl[] = { "Run", "Name", "Team" };
    j = new JTable(data, cl);
    j.setBounds(30, 40, 200, 300);
    JScrollPane sp = new JScrollPane(j);
    this.add(sp);
    this.setSize(500, 400);
    this.setVisible(true);
  }
}

class Practical4 {

  public static void main(String[] args) {
    Frame a = new Frame();
  }
}
