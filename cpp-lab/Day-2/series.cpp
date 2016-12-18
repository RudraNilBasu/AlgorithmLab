#include<iostream>

using namespace std;

int ser(int n)
{
	int m=1,sum=1,no=12;
	while(m<=n) {
		m++;
		sum+=no;
		no+=10;
	}
	return sum;
}

int main()
{
	cout<<"n: ";
	int n;
	cin>>n;
	cout<<"Sum of series: "<<ser(n)<<endl;
	return 0;
}
