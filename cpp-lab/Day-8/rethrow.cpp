#include<iostream>
using namespace std;
void exep()
{
	int x=1,y=2;
	if((y-x)==2)
		throw 'A';
	else
		throw 'B';
}
int main()
{
	try {
		exep();
	} catch(char ch) {
		if(ch=='A') {
			cout<<"Done\n";
		} else {
			throw 0;
		}
	}
}
