#include<iostream>
using namespace std;
void divide(int x, int y)
{
	try {
		if(y==0) {
			throw 0.0;
		} else {
			cout<<(float)(x/y)<<endl;
		}
	} catch (double) {
		cout<<"Div by 0\n";
		throw;
	}
}
int main()
{
	int x=5, y=4;
	try {
		divide(x, y);
	} catch(double) {
		cout<<"Caught!\n";
	}
	return 0;
}
