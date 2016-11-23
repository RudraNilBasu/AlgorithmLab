#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<vector>
#include<math.h>
#include<queue>
#include<algorithm>

#define DEBUG(x) cout<< '>' << #x<<':'<<x<<endl;
#define ll long long int

#define intd(x); scanf("%d",&x);
#define intf(x); scanf("%f",&x);

using namespace std;

class master
{
public:
	string name;
	string code;
	//virtual void display()=0;
	void inp(string _name, string _code)
	{
		name=_name;
		code=_code;
	}
};

class account : public master
{
public:
	int pay;
	void init1(string _name, string _code, int _pay)
	{
		inp(_name, _code);
		pay=_pay;
	}
	void display1()
	{
		cout<<"Name: "<<name<<" code: "<<code<<" pay: "<<pay<<endl;
	}
};

class admin : public master
{
public:
	int exp;
	void init2(string _name, string _code, int _exp)
	{
		inp(_name, _code);
		exp=_exp;
	}
	void display2()
	{
		cout<<"Name: "<<name<<" code: "<<code<<" exp: "<<exp<<endl;
	}
};

class person : public admin, public account
{
public:
	void initialise(string _name, string _code, int _exp, int _pay)
	{
		init1(_name, _code, _pay);
		init2(_name, _code, _exp);
	}
	void display()
	{
		display1();
		display2();
	}
};

int main()
{
	person p1;
	p1.initialise("Rudra", "CS101", 2, 0);
	p1.display();
	return 0;
}

