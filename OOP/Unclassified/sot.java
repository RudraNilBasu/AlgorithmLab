class sot
{
	public static void main(String args[])
	{
		int i,j;
		int n=args.length;
		int a[]=new int[n];
		for(i=0;i<n;i++) {
			a[i]=Integer.parseInt(args[i]);
		}
		for(i=0;i<n-1;i++) {
			for(j=0;j<n-i-1;j++) {
				if(a[j]>a[j+1]) {
					a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);
				}
			}
		}
		for(i=0;i<n;i++) {
			System.out.println(a[i]);
		}
	}
}
