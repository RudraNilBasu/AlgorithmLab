#include<iostream>
using namespace std;
class A
{
	int x;
public:
	A(int x) {
		this->x=x;
	}
private:
	friend void disp(A);
};

void disp(A a)
{
	cout<<a.x<<endl;
}

int main()
{
	A a(100);
	disp(a);
	return 0;
}
