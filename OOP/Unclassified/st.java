class Student
{
	static int count;
	int roll;
	Student()
	{
		roll=++count;
	}
}
class Science extends Student
{
	int phy,chem,math;
	Science(int _phy, int _chem, int _math)
	{
		super();
		phy=_phy;
		chem=_chem;
		math=_math;
	}
}
class Art extends Student
{
	int hist,geo,eng;
	Art(int _hist, int _geo, int _eng)
	{
		super();
		hist=_hist;
		geo=_geo;
		eng=_eng;
	}
}
class st
{
	public static void main(String args[])
	{
		Art a1=new Art(10,20,30);
		Science s1=new Science(15,25,31);
		System.out.println("Art\t\t"+a1.hist+"\t"+a1.geo+"\t"+a1.eng+"\tRoll "+a1.roll);
		System.out.println("Science\t\t"+s1.phy+"\t"+s1.chem+"\t"+s1.math+"\tRoll "+s1.roll);
	}
}
