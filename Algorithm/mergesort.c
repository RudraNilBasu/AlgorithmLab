#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

#define INF INT_MAX


void print(int *a, int st, int n)
{
	int i;
	printf("Sorteds array:\n");
	for(i=st;i<n;i++) {
		printf("%d\n",a[i]);
	}
}

void merge(int *a, int p, int q, int r)
{
	//printf("p=%d\tq=%d\tr=%d\n",p,q,r);
	//print(a,p,r);
	int n1=q-p+1;
	int n2=r-q;
	int *L=(int *)malloc((n1+1)*sizeof(int));
	int *R=(int *)malloc((n2+1)*sizeof(int));
	int i,j,k;
	for(i=0;i<n1;i++) {
		L[i]=a[p+i];
	}
	L[n1]=INF;
	for(j=0;j<n2;j++) {
		R[j]=a[q+1+j];
	}
	R[n2]=INF;
	i=0;
	j=0;
	/*
	printf("L:\n");
	for(i=0;i<n1;i++) {
		printf("%d\n",L[i]);
	}
	printf("R:\n");
	for(i=0;i<n2;i++) {
		printf("%d\n",R[i]);
	}
	*/
	i=0;
	j=0;
	for(k=p;k<=r;k++) {
		if(L[i]<R[j]) {
			a[k]=L[i];
			i++;
		} else {
			a[k]=R[j];
			j++;
		}
	}
	/*
	printf("Merged:\n");
	for(i=p;i<=r;i++) {
		printf("%d\n",a[i]);
	}
	
	printf("p=%d\tr=%d\n",p,r);
	print(a,p,r);
	*/
}

void merge_sort(int *a, int p, int r)
{
	//printf(">p=%d\t>q=%d\n",p,r);
	if(p<r) {
		int q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}


int main()
{
	int n,i;
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++) {
		scanf("%d",a+i);
	}
	merge_sort(a,0,n-1);
	print(a,0,n);
	return 0;
}