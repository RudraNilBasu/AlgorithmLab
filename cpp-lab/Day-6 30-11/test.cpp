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

class lol
{
public:
	void hue()
	{
		cout<<"HUE\n";
	}
	virtual void kal()
	{
		cout<<"kal\n";
	}
};

class ha:public lol
{
	public:	
	void hue()
	{
		cout<<"HA child\n";
	}
	virtual void kal()
	{
		cout<<"kal child\n";
	}
};

int main()
{
	ha h;
	//h.hue();
	lol l;
	lol *lpt;
	lpt=&l;
	lpt->hue();
	lpt->kal();
	// referencing ha class (child)
	lpt=&h;
	lpt->hue();
	lpt->kal();
	return 0;
}

