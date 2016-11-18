/*
Use operator overloading to compare two objects with 
string as their attributes
*/
#include<string>
#include<iostream>

using namespace std;

class String {
	string s;
	public:
	String() {
		s="";
	}
	String(string _s)
	{
		s=_s;
	}
	bool operator==(String b)
	{
		if(s==b.s) {
			return true;
		} else {
			return false;
		}
	}
};

int main()
{
	String a("rudra"), b("rudra"), c("rohit");
	if(a==b) {
		cout<<"Equal\n";
	} else {
		cout<<"NOT Equal";
	}
	if(a==c) {
		cout<<"Equal\n";
	} else {
		cout<<"NOT Equal";
	}
}
