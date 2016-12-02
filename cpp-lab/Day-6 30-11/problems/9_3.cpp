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
#define PI 3.14156

using namespace std;

class Shape
{
public:
	double l,b;
	
	void getData(double _l, double _b)
	{
		l=_l;
		b=_b;
	}
	/*
	virtual void display_area()
	{}
	*/
	
	virtual void display_area()
	{
		cout<<"Shape class\n";
	}
	
};

class triangle : public Shape
{
	void getData(double _l, double _b)
	{
		l=_l;
		b=_b;
	}
	void display_area()
	{
		//DEBUG(l)
		double areaTriangle=0.5*l*b;
		DEBUG(areaTriangle)
	}
};

class rectangle : public Shape
{
	void getData(double _l, double _b)
	{
		l=_l;
		b=_b;
	}
	void display_area()
	{
		double areaRectangle=l*b;
		DEBUG(areaRectangle)
	}
};

class circle : public Shape
{
	void getData(double _l, double _b)
	{
		l=_l;
		b=0;
	}
	/*
	void display_area()
	{
		double areaCircle=PI*l*l;
		DEBUG(areaCircle)
	}
	*/
};

int main()
{
	Shape *s;
	char ch; // choice
	cout<<"Rectangle(r) or Triangle(t) or Circle (c)? \n";
	cin>>ch;
	if(ch=='r' || ch=='R') {
		rectangle r;
		s=&r;
		double x,y;
		cout<<"Enter the  value of sides\n";
		cin>>x>>y;
		s->getData(x,y);
		s->display_area();
	} else if(ch=='t' || ch=='T') {
		triangle t;
		s=&t;
		double x,y;
		cout<<"Enter the  value of sides\n";
		cin>>x>>y;
		s->getData(x,y);
		s->display_area();
	} else if(ch=='c' || ch=='C') {
		circle c;
		s=&c;
		cout<<"Enter radius\n";
		double x;
		cin>>x;
		s->getData(x,0);
		s->display_area();
	} else {
		cout<<"Wrong choice";
	}
	return 0;
}

