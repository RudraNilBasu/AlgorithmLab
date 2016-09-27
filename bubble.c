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

int bub_sort(int a[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(a[j]>a[j+1]) {
				SWAP(a[j],a[j+1]);
			}
		}
	}
}

int bub_sort2(int a[], int n)
{
	int i,j;
	for(i=n-1;i>=0;i--) {
		for(j=0;j<i;j++) {
			if(a[j]>a[j+1]) {
				SWAP(a[j],a[j+1]);
			}
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
	bub_sort(a,n);	
	print(a,n);
	return 0;
}
