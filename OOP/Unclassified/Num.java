class Complex
{
	int real;
	double img;
	Complex(int _real, double _img)
	{
		real=_real;
		img=_img;
	}
	void Show()
	{
		System.out.println(real+"i"+img);
	}
}
class Num
{
	static Complex add(Complex a, Complex b)
	{
		Complex c=new Complex(0,0.0);
		c.real=add(a.real,b.real);
		c.img=add(a.img, b.img);
		//c.show();
		return c;
	}
	static int add(int a, int b)
	{
		return a+b;
	}
	static double add(double a, double b)
	{
		return a+b;
	}
	
	public static void main(String args[])
	{
		Complex a1=new Complex(10,20.0);
		Complex a2=new Complex(12,25.0);
		Complex c=add(a1,a2);
		//add(a1,a2);
		System.out.println(c.real+"+i"+c.img);
		//c.show();
	}
}
