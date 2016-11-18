/*
Use Operator Overloading to perform basic 
mathematic operations on two Objects with 
one float attribute
*/
#include<stdio.h>

class Float {
	float x;
	public:
	Float() {}
	Float(float _x) {
		x=_x;
	}
	float getF() {
		return x;
	}
	Float operator+(Float b) {
		Float y;
		y.x= x+b.x;
		return y;
	}
	Float operator-(Float b) {
		Float y;
		y.x= x-b.x;
		return y;
	}
	Float operator*(Float b) {
		Float y;
		y.x= x*b.x;
		return y;
	}
	Float operator/(Float b) {
		Float y;
		if(b.x==0.0f) {
			printf("LOL\n");
			return y;
		}
		y.x= x/b.x;
		return y;
	}
};

int main()
{
	Float a(20.0f),b(15.5f);
	Float c=a+b;
	printf("a+b=%f\n",c.getF());
	c=a-b;
	printf("a-b=%f\n",c.getF());
	c=a*b;
	printf("a*b=%f\n",c.getF());
	c=a/b;
	printf("a/b=%f\n",c.getF());
	return 0;
}
