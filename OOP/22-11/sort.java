class asc extends Thread
{
	int a[];
	asc() {}
	asc(int arr[])
	{
		int i;
		a=new int[arr.length];
		for(i=0;i<a.length;i++) {
			a[i]=arr[i];
		}
	}
	public void run()
	{
		int i,j;
		for(i=0;i<a.length-1;i++) {
			for(j=0;j<a.length-i-1;j++) {
				if(a[j]>a[j+1]) {
					a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);
				}
			}
		}
		show();
	}
	void show()
	{
		int i;
		for(i=0;i<a.length;i++) {
			System.out.println("Element in "+(i+1)+"th index in ascending order="+a[i]);
		}
	}
}

class dsc extends Thread
{
	int a[];
	dsc(int arr[])
	{
		int i;
		a=new int[arr.length];
		for(i=0;i<a.length;i++) {
			a[i]=arr[i];
		}
	}
	public void run()
	{
		int i,j;
		for(i=0;i<a.length-1;i++) {
			for(j=0;j<a.length-i-1;j++) {
				if(a[j]<a[j+1]) {
					a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);
				}
			}
		}
		show();
	}
	void show()
	{
		int i;
		for(i=0;i<a.length;i++) {
			System.out.println("Element in "+(i+1)+"th index in descending order="+a[i]);
		}
	}
}

class sort 
{
	public static void main(String args[])
	{
		int i;
		int len=args.length;
		int a[]=new int[len];
		for(i=0;i<len;i++) {
			a[i]=Integer.parseInt(args[i]);
		}
		asc as=new asc(a);
		dsc b=new dsc(a);
		as.start();
		b.start();
	}
}

