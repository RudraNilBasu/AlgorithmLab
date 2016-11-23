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

class Staff
{
public:
	string code_name;
	virtual void display()=0;
};

class Teacher : public Staff
{
public:
	string subj;
	string publ;
	void init(string code, string _subj, string _publ)
	{
		code_name=code;
		subj=_subj;
		publ=_publ;
	}
	void display()
	{
		cout<<"Code name: "<<code_name<<endl;
		cout<<"Teacher subj =  "<<subj<<"\tTeacher publ "<<publ;
	}
};

class Typist : public Staff
{
public:
	int speed;
	void init(string code, int s)
	{
		code_name=code;
		speed=s;
	}
	void display()
	{
		cout<<"Code name: "<<code_name<<endl;
		cout<<"Speed of Typist "<<speed;
	}
};

class Officer : public Staff
{
public:
	char grade;
	void init(string code, char g)
	{
		code_name=code;
		grade=g;
	}
	void display()
	{
		cout<<"Code name: "<<code_name<<endl;
		cout<<"Class of Officer "<<grade;
	}
};

class regular : public Typist
{
public:
	void typ(string code, int speed)
	{
		init(code, speed);
	}
	void display()
	{
		cout<<"Code name: "<<code_name<<endl;
		cout<<"Regular Typist\n";
	}
};

class casual : public Typist
{
public:
	int wage;
	void typ(string code, int speed, int _wage)
	{
		init(code, speed);
		wage=_wage;
	}
	void display()
	{
		cout<<"Code name: "<<code_name<<endl;
		cout<<"Daily Wages: "<<wage;
	}
};

int main()
{
	vector<Staff *> database;
	Teacher t;
	t.init("T010", "CSE", "CLRS");
	regular tr;
	tr.typ("TPR010", 2);
	casual cst;
	cst.typ("TRC011",5,500);
	Officer of;
	of.init("OF010", 'C');
	database.push_back(&t);
	database.push_back(&tr);
	database.push_back(&cst);
	database.push_back(&of);
	int i;
	for(i=0;i<database.size();i++) {
		Staff *s=database[i];
		s->display();
	}
	return 0;
}

