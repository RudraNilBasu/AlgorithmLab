#include<stdio.h>

#define N 4
#define MSG(x) scanf("%s\n",x)
#define inpd(x) scanf("%d",&x)

#define SWAP(A,B) A=(A+B)-(B=A)

void sort(int val[N], int wt[N])
{
	int i,j;
	for(i=0;i<N-1;i++) {
		for(j=0;j<N-i-1;j++) {
			if( ((val[j]*1.0)/wt[j]) < ((val[j+1]*1.0)/wt[j+1]) ) {
				SWAP(val[j],val[j+1]);
				SWAP(wt[j],wt[j+1]);
			}
		}
	}
}

void fracknap(int val[N], int wt[N], int c, int n)
{
	// sort wt[] based on decreasing order of val[i]/wt[i]
	sort(val, wt);
	int i,rc;
	// print
	/*
	for(i=0;i<n;i++) {
		printf("%d ",val[i]);
	}
	printf("\n");
	for(i=0;i<n;i++) {
		printf("%d ",wt[i]);
	}
	printf("\n");
	for(i=0;i<n;i++) {
		printf("%f ",(val[i]*1.0)/wt[i]);
	}
	printf("\n");
	*/
	// end
	float x[N];
	for(i=0;i<n;i++) {
		x[i]=0;
	}
	rc=c;
	for(i=0;i<n;i++) {
		printf("%d %d\n",wt[i],rc);
		if(wt[i]>rc) {
			break;
		}
		x[i]=1;
		rc=rc-wt[i];
	}
	if(i<n) {
		x[i]=(rc*1.0)/wt[i];
	}
	// print capacity
	float ans=0.0;
	for(i=0;i<N;i++) {
		printf("%f ",x[i]);
		//ans+=(x[i]*val[i]);
	}
	printf("\n");
	ans=0;
	for(i=0;i<N;i++) {
		printf("%f ",x[i]*val[i]);
		ans+=(x[i]*val[i]);
	}
	printf("\n");
	printf("Total Value %f\n",ans);
	ans=0;
	for(i=0;i<N;i++) {
		printf("%f ",x[i]*wt[i]);
		ans+=(x[i]*wt[i]);
	}
	printf("\n");
	printf("Value is %f\n",ans);
}

int main()
{
	int val[N],wt[N];
	int i,c,n; // c=capacity, n=no of elements
	//MSG("Enter value of n");
	//inpd(n);
	n=N;
	c=50;
	//MSG("Enter value of c (the capacity)");
	//inpd(c);
	//MSG("Enter the values");
	for(i=0;i<N;i++) {
		inpd(val[i]);
	}
	//MSG("Enter value of wts");
	for(i=0;i<n;i++) {
		inpd(wt[i]);
	}
	//MSG("Enter capacity");
	//inpd(c);
	fracknap(val, wt, c, n);
	return 0;
}
