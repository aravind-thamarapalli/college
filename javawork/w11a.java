import javax.swing.*;
import java.awt.*;
/*<applet code="week12a.java" width=400 height=400> </applet>*/
class app extends JFrame implements Runnable
{
String msg="Hello everyone! Good morning.";
int x = 0, y = 200; 
boolean flag = false;
Thread t = null;
public void init()
{
t = new Thread(this);
t.start();
}
public void run()
{
while(true){
if(x == 220) flag = true;
else if(x == 0) flag = false;
if(flag) {
x -= 1;
} else {
x += 1;
}
repaint();
try {
Thread.sleep(30);
} catch(InterruptedException e) {
e.printStackTrace();
}
}
}
public void paint(Graphics g){
g.setColor(Color.cyan);
g.fillRect(0, 0, 400, 400);
g.setColor(Color.black);
g.drawString(msg, x, y);
}
}