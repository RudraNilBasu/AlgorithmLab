class ErrF
{
	public static void main(String args[])
	{
		//int a[5]={1,2,3,4,5};
		int a[]=new int[5];
		int i;
		for(i=1;i<=5;i++) {
			a[i-1]=i;
		} try {
			System.out.println("6th element is "+a[5]);
		}
		finally {
			System.out.println("FINALLY!");
		}
	}
}
