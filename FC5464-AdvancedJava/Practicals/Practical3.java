/*
Author -19CM007 Ayush Shashikant Bulbule
Practical No 3: Write a Program in java to create a JTree. 
*/

import java.awt.*;
import javax.swing.*;
import javax.swing.tree.*;

class Frame extends JFrame {

  private JLabel l;
  private JTree tree;
  private DefaultMutableTreeNode IPL, MI, CSK, pl;

  public Frame() {
    super("Jtree");
    l = new JLabel("[]");
    l.setForeground(Color.RED);
    this.add(l, BorderLayout.NORTH);
    IPL = new DefaultMutableTreeNode("IPL");
    MI = new DefaultMutableTreeNode("MI");
    IPL.add(MI);
    String mi[] = {
      "Rohit Sharma (C)",
      "Quinton de Kock (Overseas/Wk)",
      "Suryakumar Yadav",
      "Ishan Kishan",
      "Hardik Pandya",
      "Krunal Pandya",
      "Kieron Pollard (Overseas)",
      "Nathan Coulter-Nile (Overseas)",
      "Rahul Chahar",
      "Trent Boult (Overseas)",
      "Jasprit Bumrah",
    };

    for (int i = 0; i < mi.length; i++) {
      pl = new DefaultMutableTreeNode(mi[i]);
      MI.add(pl);
    }

    CSK = new DefaultMutableTreeNode("CSK");
    IPL.add(CSK);
    String csk[] = {
      "Shane Watson (Overseas)",
      "Faf du Plessis (Overseas)",
      "Ambati Rayudu",
      "Ruturaj Gaikwad",
      "Kedar Jadhav",
      "M. S. Dhoni (C & Wk)",
      "Ravindra Jadeja",
      "Dwayne Bravo (Overseas)",
      "Piyush Chawla",
      "Deepak Chahar",
      "Josh Hazlewood (Overseas)",
    };

    for (int a = 0; a < csk.length; a++) {
      pl = new DefaultMutableTreeNode(csk[a]);
      CSK.add(pl);
    }

    tree = new JTree(IPL);
    this.add(tree, BorderLayout.CENTER);
    this.setVisible(true);
    this.setSize(500, 500);
  }
}

class Practical3 {

  public static void main(String... args) {
    Frame a = new Frame();
  }
}
