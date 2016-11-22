import java.util.*;
class Art
{
	int marks;
	Art(int m)
	{
		marks=m;
	}
	public int getMarks()
	{
		return marks;
	}
	public String type()
	{
		return "Art";
	}
}
class Science
{
	int marks;
	Science(int m)
	{
		marks=m;
	}
	public int getMarks()
	{
		return marks;
	}
	public String type()
	{
		return "Science";
	}
}

class A extends Thread
{
	Vector v;
	A(Vector a)
	{
		v=new Vector();
		int i;
		for(i=0;i<a.size();i++) {
			/*
			if(a.elementAt(i).type().equals("Art")) {
				v.addElement(a.elementAt(i));
			}
			*/
			if(a.elementAt(i) instanceof Art) {
				v.addElement((Art)a.elementAt(i));
			}
		}
	}
	public void run()
	{
		int i;
		for(i=0;i<v.size();i++) {
			Art a=(Art)v.elementAt(i);
			System.out.println("Art marks="+a.getMarks());
		}
	}
}

class S extends Thread
{
	Vector v;
	S(Vector a)
	{
		v=new Vector();
		int i;
		for(i=0;i<a.size();i++) {
			/*
			if(a.elementAt(i).type().equals("Science")) {
				v.addElement(a.elementAt(i));
			}
			*/
			if(a.elementAt(i) instanceof Science) {
				v.addElement((Science)a.elementAt(i));
			}
		}
	}
	public void run()
	{
		int i;
		for(i=0;i<v.size();i++) {
			Science a=(Science)v.elementAt(i);
			System.out.println("Science marks="+a.getMarks());
		}
	}
}

class student 
{
	public static void main(String args[])
	{
		Vector v=new Vector();
		int n=10;
		Art a=new Art(25);
		v.addElement(a);
		Art b=new Art(20);
		v.addElement(b);
		Science s1=new Science(10);
		Science s2=new Science(90);
		v.addElement(s1);
		v.addElement(s2);
		if(args[0].equals("Art")) {
			A threadA=new A(v);
			threadA.start();
		} else {
			S threadS=new S(v);
			threadS.start();
		}
	}
}

