#include<stdio.h>
using namespace std;

typedef struct charge {
	char name[50];
	int units;
	float cost;
}charge;

float findCost(int n)
{
	float c=0;
	if(n>=100) {
		c+=(100*0.6);
		n-=100;
	} else {
		c+=(n*0.6);
		return c;
	}
	if(n>=200) {
		c+=(200*0.8);
		n-=200;
	} else {
		c+=(n*0.8);
		return c;
	}
	if(n>0) {
		c+=(n*0.9);
		return c;
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	charge chs[n];
	for(i=0;i<n;i++) {
		printf("Enter name:");
		scanf("%s",chs[i].name);
		printf("Enter no of units for %s\n",chs[i].name);
		scanf("%d",&chs[i].units);
		chs[i].cost=500.0;
		chs[i].cost+=findCost(chs[i].units);
		if(chs[i].cost>300) {
			chs[i].cost+=(0.15*chs[i].cost);
		}
	}
	for(i=0;i<n;i++) {
		printf("%s\t%d\t%f\n",chs[i].name,chs[i].units,chs[i].cost);
	}
	return 0;
}
