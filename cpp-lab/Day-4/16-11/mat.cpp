/*
Use Operator Overloading to perform basic 
mathematic operations on two Objects with 
one matrix as their attribute
*/
#include<stdio.h>

class Mat {
	int m,n;
	int a[100][100];
	public:
	Mat() {}
	Mat(int _m, int _n) {
		m=_m;
		n=_n;
	}
	int getM()
	{
		return m;
	}
	int getN()
	{
		return n;
	}
	void inp() {
		int i,j;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				printf("Enter %d,%d element\n",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		}
	}
	void init() {
		int i,j;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				a[i][j]=0;
				//printf("%d ",a[i][j]);
			}
			//printf("\n");
		}
	}
	void getF() {
		printf("The matrix (%d,%d):\n",m,n);
		int i,j;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	Mat operator+(Mat b) {
		Mat y(3,3);
		int i,j;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				y.a[i][j]=a[i][j]+b.a[i][j];
			}
		}
		return y;
	}
	Mat operator-(Mat b) {
		Mat y(3,3);
		int i,j;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				y.a[i][j]=a[i][j]-b.a[i][j];
			}
		}
		return y;
	}
	Mat operator*(Mat b) {
		Mat y(3,3);
		if(getN()!=b.getM()) {
			printf("LOL\n");
			return y;
		}
		int i,j,k,sum=0;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				sum=0;
				for(k=0;k<b.getN();k++) {
					//y.a[i][j]=a[i][j]*b.a[i][j];
					sum+=a[i][j]*b.a[j][k];
				}
				y.a[i][j]=sum;
				sum=0;
			}
		}
		return y;
	}
};

int main()
{
	Mat a(3,3),b(3,3);
	// input
	a.inp();
	b.inp();
	// display
	a.getF();
	b.getF();
	// c Obj
	Mat c(3,3);
	c.init(); // init to 0
	// get m and n
	//printf("hue (%d,%d)\n",c.getM(),c.getN());
	// add
	c=a+b;
	//printf("hue (%d,%d)\n",c.getM(),c.getN());
	//printf("(%d,%d)",c.getM(),c.getN());
	printf("a+b=\n");
	c.getF();
	// sub
	c=a-b;
	printf("a-b=\n");
	c.getF();
	// mult
	c=a*b;
	printf("a-b=\n");
	c.getF();
	// end
	return 0;
}
