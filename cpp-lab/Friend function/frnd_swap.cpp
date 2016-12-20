#include<iostream>
using namespace std;
class A;
class S
{
	int x;
public:
	friend void swap(S&,A&);
	S(int x) {this->x=x;}
	void display()
	{
		cout<<"value of x of S: "<<x<<endl;
	}
};
class A
{
	int x;
public:
	friend void swap(S&,A&);
	A(int x) {this->x=x;}
	void display()
	{
		cout<<"value of x of A: "<<x<<endl;
	}
};
void swap(S& a, A& b)
{
	int temp=a.x;
	a.x=b.x;
	b.x=temp;
}

int main()
{
	S a(100);
	A b(200);
	a.display();
	b.display();
	swap(a,b);
	a.display();
	b.display();
	return 0;
}
