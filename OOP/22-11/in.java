class A implements Runnable
{
	public void run()
	{
		int i;
		for(i=1;i<=10;i++)
			System.out.println("From A");
	}
}

class B implements Runnable
{
	public void run()
	{
		int i;
		for(i=1;i<=10;i++)
			System.out.println("From B");
	}
}
class C implements Runnable
{
	public void run()
	{
		int i;
		for(i=1;i<=10;i++)
			System.out.println("From C");
	}
}
class in
{
	public static void main(String args[])
	{
		A a=new A();
		Thread th=new Thread(a);
		B b=new B();
		Thread th2=new Thread(b);
		C c=new C();
		Thread th3=new Thread(c);
		th.start();
		th2.start();
		th3.start();
	}
}
