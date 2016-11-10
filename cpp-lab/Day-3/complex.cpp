#include<stdio.h>
using namespace std;

class Complex
{
	int real;
	int img;
	public:
		Complex() {
			real=0;
			img=0;
		}
		Complex(int real, int img)
		{
			this->real=real;
			this->img=img;
		}
		static Complex add(Complex a, Complex b)
		{
			Complex c;
			c.real=a.real+b.real;
			c.img=a.img+b.img;
			return c;
		}
		void show()
		{
			printf("%d+i%d\n",real,img);
		}
	private:
};

int main()
{
	Complex a(10,20);
	Complex b(5,-5);
	printf("No.s to add\n");
	a.show();
	b.show();
	Complex c;
	c=Complex::add(a,b);
	//c.add(a,b);
	printf("Result: ");
	c.show();
}
