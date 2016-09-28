class patt2
{
	public static void main(String args[])
	{
		int n=4,i,j,k;
		for(i=1;i<=n;i++) {
			for(j=n-1;j>=i;j--) {
				System.out.print(" ");
			}
			for(j=1;j<=((2*i)-1);j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
