import java.awt.*;
import java.applet.*;
public class a extends Applet
{
	String msg="";
	int posx=25;
	int posy=25;
	public void init()
	{
		setForeground(Color.red);
		setBackground(Color.cyan);
		msg+="Inside init() ===== ";
	}
	public void start()
	{
		msg+="Inside start()  ====== ";
	}
	public void paint(Graphics g)
	{
		msg+="Inside paint.";
		g.drawString(msg, posx, posy);
		/*
		g.drawString("______", posx, posy);
		g.drawString("|     |", posx, posy);
		*/
		setForeground(Color.red);
		int x[]={10,20,10};
		int y[]={10,20,30};
		g.drawPolygon(x, y, 3);
		int x1[]={60,100,60,100};
		int y1[]={60,60,100,100};
		g.fillPolygon(x1,y1,4);
		g.drawOval(150,150,50,100);
		g.fillOval(200,200,50,50);
		int x2[]={100,200};
		int y2[]={100,100};
		g.drawPolygon(x2,y2,2);
		g.drawRect(200,100,60,60);
		g.fillRect(80,100,60,60);
	}
	public void stop()
	{}
	public void destroy()
	{}
}
