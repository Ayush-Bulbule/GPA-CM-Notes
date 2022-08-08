/* Write programs on drawing lines, rectangle, circle and Ellipse, arcs, 
Polygons, */

import java.applet.*;
import java.awt.*;

public class Practical22 extends Applet {

  public void start() {
    System.out.println("Hello");
  }

  public void paint(Graphics g) {
    g.setFont(new Font("Cambria", Font.BOLD, 15));
    g.drawString("Practical No 22", 15, 15);
    g.drawString("Drawing Shapes in Java", 30, 30);
    g.setColor(Color.red);

    g.drawLine(20, 30, 20, 300);
    g.drawRect(70, 100, 30, 30);
    g.fillRect(170, 100, 30, 30);
    g.drawOval(70, 200, 30, 30);

    g.setColor(Color.pink);
    g.fillOval(170, 200, 30, 30);
    g.drawArc(90, 150, 30, 30, 30, 270);
    g.fillArc(270, 150, 30, 30, 0, 180);
  }
}
/*
 * <applet code="Practical22" width=400 height=400> </applet>
 */
