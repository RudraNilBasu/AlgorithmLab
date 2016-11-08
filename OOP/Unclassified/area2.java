class area2
{
	area2(int sq)
	{
		System.out.println("Area of Square = "+sq*sq);
	}
	area2(int l, int w)
	{
		System.out.println("Area of Rectangle = "+l*w);
	}
	area2(float b,float ht)
	{
		System.out.println("Area of Triangle = "+(0.5)*(b*ht));
	}
	public static void main(String args[])
	{
		area2 a1=new area2(5);
		a1=new area2(12,20);
		a1=new area2(12.5f,13.0f);
	}
}
