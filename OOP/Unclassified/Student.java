class Student
{
	String name;
	float per;
	void init(String _name, float _per)
	{
		name=_name;
		per=_per;
	}
	public static void main(String args[])
	{
		Student s[]=new Student[3];
		int i,j;
		for(i=0;i<3;i++) {
			s[i]=new Student();
		}
		s[0].name="Rudra";s[0].per=50.0f;
		s[1].name="Tokon";s[1].per=99.99f;
		s[2].name="Rohit";s[2].per=98.99f;
		for(i=0;i<3-1;i++) {
			for(j=0;j<3-i-1;j++) {
				if(s[i].per>s[i+1].per) {
					Student temp=s[i];
					s[i]=s[i+1];
					s[i+1]=temp;
				}
			}
		}
		for(i=0;i<3;i++) {
			System.out.println("Name="+s[i].name+" Percentage="+s[i].per);
		}
	}
}
