import java.awt.Dimension;
import java.awt.Graphics;
import javax.swing.JPanel;

public class MainPanel extends JPanel {

  private static final int WIDTH = 240;
  private static final int HEIGHT = 240;

  public MainPanel() {
    setPreferredSize(new Dimension(WIDTH, HEIGHT));

  }

  public void paintComponent(Graphics g) {
    super.paintComponent(g);
  }
}
