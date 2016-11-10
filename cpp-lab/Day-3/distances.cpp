#include<stdio.h>

class DM {
	int m;
	int cm;
	public:
	DM() {}
	DM(int m, int cm)
	{
		this->m=m;
		this->cm=cm;
	}
	friend float convert(DM);
};

class DB {
	float inch;
	int ft;
	public:
	DB() {}
	DB(int inch, int ft)
	{
		this->inch=inch;
		this->ft=ft;
	}
	friend float convert(DM a)
	{
		// convert cm to inch
		return a.cm*2.25f;
	}
	void add(DM a)
	{
		inch+=convert(a);
		printf("Inc=%f\n",inch);
	}
};

int main()
{
	DM a(1,100);
	DB b(2,60);
	b.add(a);
	return 0;
}
