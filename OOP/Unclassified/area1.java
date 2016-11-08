class area1
{
	void area(int sq)
	{
		System.out.println("Area of Square = "+sq*sq);
	}
	void area(int l, int w)
	{
		System.out.println("Area of Rectangle = "+l*w);
	}
	void area(float b,float ht)
	{
		System.out.println("Area of Triangle = "+(0.5)*(b*ht));
	}
	public static void main(String args[])
	{
		area1 a1=new area1();
		a1.area(10);
		a1.area(10,20);
		a1.area(10.0f,25.0f);
	}
}
