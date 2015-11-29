import java.awt.*;
import javax.swing.*;

public class HelloWorld extends JFrame
{
  public HelloWorld() {
    setTitle("Hello Worldを表示する");

    MainPanel panel = new MainPanel();
    Container contentPane = getContentPane();
    contentPane.add(panel);

    pack();
  }

  public static void main(String[] args) {
    HelloWorld frame = new HelloWorld();
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setVisible(true);
  }
}
