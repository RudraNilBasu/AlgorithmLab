#include<iostream>
using namespace std;
void exep(int a, int b)
{
	if(a==b) {
		throw 0;
	} else {
		throw 1.0f;
	}
}
void check(int a, int b)
{
	try {
		exep(a,b);
	} catch (int x) {
		cout<<"Equal no.s\n";
	} catch (float x) {
		cout<<"Unequal no.s\n";
	}
}
int main()
{
	check(10,10);
	check(10,20);
}
