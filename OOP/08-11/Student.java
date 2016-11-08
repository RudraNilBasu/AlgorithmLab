class Student
{
	String name;
	int roll;
	int marks1;
	int marks2;
	int marks3;
	float perc;
	void init(String _name, int _roll, int _marks1, int _marks2, int _marks3)
	{
		name=_name;
		roll=_roll;
		marks1=_marks1;
		marks2=_marks2;
		marks3=_marks3;
	}
	void calcPerc()
	{
		perc=(marks1+marks2+marks3)/3.0f;
	}
	void display()
	{
		System.out.println("Name= "+name+" roll= "+roll+"Marks of three subjects "+marks1+"\t"+marks2+"\t"+marks3+"\n Percentage= "+perc);
	}
}
