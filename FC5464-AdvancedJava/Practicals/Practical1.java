/*
Author -19CM007 Ayush Shashikant Bulbule
Practical No 1 :Write a Program to demonstrate the use of JLabel and ImageIcon, JTextField
and JPasswordField.
*/

import java.awt.*;
import javax.swing.*;

class MyFrame extends JFrame {

  private JPanel p1;
  private ImageIcon i;
  private JLabel l1, l2, l3;
  private JTextField f;
  private JPasswordField p;
  private JButton b;

  public MyFrame() {
    super("FaceBook");
    p1 = new JPanel();
    i = new ImageIcon("gpa.png");
    l1 = new JLabel("", i, JLabel.CENTER);
    l1.setBounds(0, 0, 350, 250);
    p1.add(l1);
    l2 = new JLabel("Username : \n");
    p1.add(l2);
    f = new JTextField(20);
    p1.add(f);
    l3 = new JLabel("\n Password :", JLabel.LEFT);
    p1.add(l3);
    p = new JPasswordField(20);
    p1.add(p);
    b = new JButton("Login");
    p1.add(b);
    this.add(p1);
    this.setVisible(true);
    this.setSize(250, 300);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
  }
}

class Practical1 {

  public static void main(String[] args) {
    MyFrame i = new MyFrame();
  }
}
