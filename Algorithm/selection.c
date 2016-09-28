#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SWAP(a,b) (a)=((a)+(b))-((b)=(a))

int input(int a[], int n)
{
	int i;
	for(i=0;i<n;i++) {
		scanf("%d",a+i);
	}
}

int print(int a[], int n)
{
	int i;
	for(i=0;i<n;i++) {
		printf("%d\n",a[i]);
	}
}

int sel_sort(int a[], int n)
{
	int i,j,pos,k;
	for(i=0;i<n;i++) {
		pos=i;
		for(j=i+1;j<n;j++) {
			if(a[pos]>a[j]) {
				pos=j;
			}
		}
		if(pos!=i) {
			SWAP(a[pos],a[i]);
		}
	}
}

int main()
{
	int i,j,n;
	scanf("%d",&n);
	int *a;
	a=(int *)malloc(n*sizeof(int));
	input(a,n);
	sel_sort(a,n);
	print(a,n);
	return 0;
}
