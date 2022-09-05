/* 
Author: 19CM007 Ayush Shashikant Bulbule.
Practical No 6: Write a Program to demonstrate the status of key on Applet window such as
KeyPressed, KeyReleased, KeyUp, KeyDown.
*/

import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/* 
<applet code="Practical6.class" width=500 height=300>
</applet>
*/
public class Practical6 extends Applet implements KeyListener {

  String msg = "";
  int x = 60, y = 100;

  public void init() {
    addKeyListener(this);
  }

  @Override
  public void keyPressed(KeyEvent e) {
    showStatus("Key Down");

    int key = e.getKeyCode();

    switch (key) {
      case KeyEvent.VK_LEFT:
        msg = "Left Arrow Pressed";
        break;
      case KeyEvent.VK_RIGHT:
        msg = "Right Arrow Pressed";
        break;
      case KeyEvent.VK_UP:
        msg = "Up Arrow Pressed";
        break;
      case KeyEvent.VK_DOWN:
        msg = "Down Arraow Pressed";
        break;
      case KeyEvent.VK_ENTER:
        msg = "Enter Pressed";
        break;
      case KeyEvent.VK_CAPS_LOCK:
        msg = "Caps Lock On";
        break;
      case KeyEvent.VK_SPACE:
        msg = "Space Pressed";
        break;
      default:
        msg = "Key pressed : ";
        break;
    }
    repaint();
  }

  @Override
  public void keyTyped(KeyEvent e) {
    msg += e.getKeyChar();
    repaint();
  }

  @Override
  public void keyReleased(KeyEvent e) {
    // TODO Auto-generated method stub
    showStatus("Key Up");
  }

  // Draw the message
  public void paint(Graphics g) {
    g.setFont(new Font("Cascadia Code", Font.BOLD, 30));
    g.drawString(msg, x, y);
  }
}
