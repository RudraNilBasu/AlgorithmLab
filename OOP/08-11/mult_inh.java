interface I1 {
	int a=3;
	public void show();
}
interface I2 {
	int b=3;
	public void show_i2();
}
class mult_inh implements I1, I2
{
	public void show()
	{
		System.out.println("Interface I1 of a = "+a);
	}
	public void show_i2()
	{
		System.out.println("Interface I2 of b = "+b);
	}
	public static void main(String args[])
	{
		mult_inh i=new mult_inh();
		i.show();
		i.show_i2();
	}
}
