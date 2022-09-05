/*
Author -19CM007 Ayush Shashikant Bulbule
Practical No 2: Write a Program to demonstrate the use of JLabel and ImageIcon, JTextField
and JPasswordField.
*/

import java.awt.*;
import javax.swing.*;
import javax.swing.JFrame;

class Frame extends JFrame {

  public JPanel pnl;
  public JScrollPane jsp;
  public JComboBox<String> cmb;

  public Frame() {
    super("Practical No : 2");
    pnl = new JPanel();
    pnl.setLayout(new FlowLayout());
    this.add(pnl);
    String arr[] = { "Marathi", "English", "Sanskrit", "Hindi" };
    cmb = new JComboBox<String>(arr);
    cmb.setMaximumRowCount(3);
    jsp = new JScrollPane(cmb);
    pnl.add(jsp);
    this.setVisible(true);
    this.setSize(300, 200);
    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }
}

public class Practical2 {

  public static void main(String[] args) {
    Frame i = new Frame();
  }
}
