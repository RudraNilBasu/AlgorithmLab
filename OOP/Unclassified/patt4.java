class patt4
{
	public static void main(String args[])
	{
		int n=4,i,j,stars;
		for(i=1;i<=n;i++) {
			for(j=1;j<i;j++) {
				System.out.print(" ");
			}
			stars=2*(n-i)-1;
			for(j=1;j<=stars;j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
