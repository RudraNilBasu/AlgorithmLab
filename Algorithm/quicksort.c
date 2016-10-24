#include<stdio.h>
#include<stdlib.h>

#define SWAP(a,b) a=(a+b)-(b=a)
/*
int swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
*/
int partition(int *a, int low, int high)
{
	int i=(low-1);
	int pivot=a[high];
	int j;
	for(j=low;j<high;j++) {
		if(a[j]<=pivot) {
			i++;
			//swap(&a[j],&a[i]);
			SWAP(a[i],a[j]);
		}
	}
	//swap(&a[i+1],&a[pivot]);
	SWAP(a[i+1],a[high]);
	return (i+1);
}

int Qsort(int *a, int low, int high)
{
	if(low<high) {
		int ppt=partition(a,low,high);
		Qsort(a,low,ppt-1);
		Qsort(a,ppt+1,high);
	}
}

int input(int *a, int n)
{
	int i;
	for(i=0;i<n;i++) {
		scanf("%d",a+i);
	}
}

int print(int *a, int n)
{
	int i;
	printf("--------------\n");
	for(i=0;i<n;i++) {
		printf("%d\n",a[i]);
	}
	printf("--------------\n");
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	input(a,n);
	Qsort(a,0,n-1);
	print(a,n);
	return 0;
}
