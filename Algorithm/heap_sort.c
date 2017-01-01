#include<stdio.h>

#define N 6
#define SWAP(A,B) A=(A+B)-(B=A)

int heapify(int a[N], int n, int i)
{
	int largest=i;
	int l=(2*i)+1;
	int r=(2*i)+2;

	if(l<n && a[l]>a[largest]) {
		largest=l;
	}

	if(r<n && a[r]>a[largest]) {
		largest=r;
	}

	if(largest!=i) {
		SWAP(a[largest], a[i]);
		heapify(a,n,largest);
	}
}

int heapsort(int a[N])
{
	int i;
	for(i=N/2;i>=0;i--) {
		heapify(a,N,i);
	}
	for(i=N-1;i>=0;i--) {
		SWAP(a[i],a[0]);
		heapify(a,i,0);
	}
}

int main()
{
	int a[N];
	int i;
	for(i=0;i<N;i++) {
		scanf("%d",a+i);
	}
	heapsort(a);
	for(i=0;i<N;i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
