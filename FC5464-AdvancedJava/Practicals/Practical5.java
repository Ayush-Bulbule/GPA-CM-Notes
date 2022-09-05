/*
Author -19CM007 Ayush Shashikant Bulbule
Practical No 5 :Write a Program in java  to create a JProgressBar
*/

import java.awt.*;
import java.awt.event.*;
import java.util.Random;
import javax.swing.*;

class MyFrame_5 extends JFrame implements ActionListener, Runnable {

  private JProgressBar pb;
  private JButton btn;
  private JLabel lbl, lbl2;
  private Canvas cnv;
  private Graphics g;
  private Thread tr;

  public MyFrame_5() {
    JPanel pn = new JPanel();
    pn.setLayout(new GridLayout(2, 1));
    this.add(pn, BorderLayout.NORTH);
    //Label
    lbl = new JLabel("Progress Indicator - 19CM007", JLabel.CENTER);
    lbl.setFont(new Font("Calibri", Font.BOLD, 24));
    pn.add(lbl);
    //Button
    btn = new JButton("Start");
    btn.setFont(new Font("Calibri", Font.BOLD, 22));
    btn.addActionListener(this);
    pn.add(btn);

    //Canvas Ti Draw Shapes
    cnv = new Canvas();
    cnv.setBounds(0, 120, 500, 400);
    this.add(cnv, BorderLayout.CENTER);

    JPanel pnl = new JPanel();
    pnl.setLayout(new GridLayout(2, 1));
    this.add(pnl, BorderLayout.SOUTH);

    //Progress Persent Label
    lbl2 = new JLabel("0%", JLabel.CENTER);
    lbl2.setFont(new Font("Calibri", Font.BOLD, 20));
    pnl.add(lbl2);

    //ProgressBar
    pb = new JProgressBar(SwingConstants.HORIZONTAL, 0, 100);
    pb.setForeground(Color.GREEN);
    pnl.add(pb);

    this.setSize(500, 500);
    this.setTitle("Practical 5 : Progress Bar");
    this.setVisible(true);
  }

  @Override
  public void actionPerformed(ActionEvent e) {
    //Action Here
    tr = new Thread(this);
    tr.start();
  }

  public void run() {
    Random rn = new Random();

    g = cnv.getGraphics();
    // g.setStroke(new BasicStroke(2));

    for (int i = 0; i <= 100; i++) {
      int s = i + 5;
      float red = rn.nextFloat();
      float green = rn.nextFloat();
      float blue = rn.nextFloat();
      Color c = new Color(red, green, blue);
      g.setColor(c);
      g.fillRect(200, (200 - i), s, s);

      pb.setValue(i);
      lbl2.setText(i + "%");

      try {
        Thread.sleep(200);
      } catch (Exception e) {
        System.out.println(e);
        e.printStackTrace();
      }
    }
  }
}

public class Practical5 {

  public static void main(String[] args) {
    MyFrame_5 mf = new MyFrame_5();
  }
}
