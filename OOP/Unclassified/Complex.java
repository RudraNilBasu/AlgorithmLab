/* To add two complex numbers. Print the result in x+iy form. Use objects as arguments to a method which will perform the addition and use function overloading
 */
class Complex
{
	static double x,y;
	Complex(double a,double b)
	{
		x=a;
		y=b;
	}
	private void print()
	{
		System.out.println(x+"+ i"+y);
	}	
}
class Test
{
	double real;
	int imag;
	Test(Complex a,Complex b)
	{
		double real;
		int imag;
		real=sum(a.x,b.x);
		imag=sum(a.y,b.y);
		System.out.println("Sum is: "+real+"+i"+imag);
	}
	private double sum(double a,double b)
	{
		return a+b;
	}
	private int sum(int a,int b)
	{
		return a+b;
	}
	public static void main(String[]args)
	{
		//double x1,x2,y1,y2;
		Complex obj=new Complex();
		Complex obj1=new Complex();
		//Complex obj2=new Complex(x2,y2);
		obj.print(4,6);
		obj1.print(1,9);
		Test t1=new Test(obj,obj1);
	}
}
