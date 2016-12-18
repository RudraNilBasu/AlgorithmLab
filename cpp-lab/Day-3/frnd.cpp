#include<stdio.h>
#define SWAP(A,B) (A)=((A)+(B))-((B)=(A))
using namespace std;
class A
{
	public:
		int val;
		A(int _val) 
		{
			val=_val;
		}
		void show()
		{
			printf("Value: %d\n",val);
		}
	private:
		friend void swap(A, A);
};

class B
{
	public:
		B() {}
		B(A *a, A *b)
		{}
	void swap(A *a, A *b)
	{
		SWAP(a->val, b->val);
	}
};

int main()
{
	A a(10);
	A b(20);
	a.show();
	b.show();

	B sw(&a,&b);
	sw.swap(&a, &b);
	
	printf("After swapping...\n");

	a.show();
	b.show();
}
