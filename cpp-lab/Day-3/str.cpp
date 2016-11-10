#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class String {
	string s;
	public:
	String() {
		s="";
	}
	String(string str)
	{
		s=str;
	}
	void concat(string s2)
	{
		s=s+s2;
	}
	void disp()
	{
		cout<<s<<endl;
	}
};
int main()
{
	String s("Rudra");
	s.disp();
	s.concat("NilBasu");
	s.disp();
	return 0;
}
