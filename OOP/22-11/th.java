/*
 Implement Threading in Java
 */

class A extends Thread
{
	public void run()
	{
		int i;
		for(i=1;i<=10;i++) {
			System.out.println("From Thread A");
		}
	}
}

class B extends Thread
{
	public void run()
	{
		int i;
		for(i=1;i<=10;i++) {
			System.out.println("From Thread B");
		}
	}
}
class C extends Thread
{
	public void run()
	{
		int i;
		for(i=1;i<=10;i++) {
			System.out.println("From Thread C");
		}
	}
}
class th
{
	public static void main(String args[])
	{
		A threadA=new A();
		B threadB=new B();
		C threadC=new C();
		threadA.setPriority(Thread.MAX_PRIORITY);
		threadB.setPriority(Thread.MIN_PRIORITY);
		threadC.setPriority(Thread.NORM_PRIORITY);
		threadA.start();
		threadB.start();
		threadC.start();
	}
}
