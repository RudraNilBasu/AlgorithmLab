#include<stdio.h>

class student {
	int roll;
public:
	static int z;
	student() {}
	//void init(int roll)
	void init()
	{
		roll=z++;
		//this->roll=roll;
	}
	void display()
	{
		printf("Roll %d\n",roll);
	}
};

int student::z;

int main()
{
	student st[10];
	//student st;
	int i;
	//st.init();
	
	for(i=0;i<10;i++) {
		int x=student::z;
		st[i].init();
		//st[i].init();
	}
	printf("The rolls are\n");
	for(i=0;i<10;i++) {
		st[i].display();
		//printf("Roll: %d\n",st[i].roll);
	}
	return 0;
}
