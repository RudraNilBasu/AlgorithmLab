interface Shape {
	public void area();
}
class Rectangle implements Shape
{
	int l=10;
	int b=20;
	public void area()
	{
		System.out.println("Rectangle Area = "+(l*b));
	}
}
class Square implements Shape
{
	int s=10;
	public void area()
	{
		System.out.println("Square Area = "+(s*s));
	}
}
class Triangle implements Shape
{
	int h=10;
	int b=20;
	public void area()
	{
		System.out.println("Triangle Area = "+0.5*(h*b));
	}
}
class Circle implements Shape
{
	int r=10;
	final double pi=3.141516;
	public void area()
	{
		System.out.println("Circle Area = "+(pi*r*r));
	}
}
class area_disp
{
	public static void main(String args[])
	{
		Rectangle r=new Rectangle();
		r.area();
		Square s=new Square();
		s.area();
		Triangle t=new Triangle();
		t.area();
		Circle c=new Circle();
		c.area();
	}
}
