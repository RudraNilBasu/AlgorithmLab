class prime
{
	static boolean primes[];
	public static void fillFalse()
	{
		int i;
		for(i=0;i<101;i++) {
			primes[i]=true;
		}
	}
	public static void initialise()
	{
		fillFalse();
		int i,j;
		primes[1]=false;
		for(i=2;i<101;i++) {
			if(primes[i]==true) {
				for(j=i+i;j<101;j+=i) {
					primes[j]=false;
				}
			}
		}
	}
	public static void print()
	{
		int i;
		for(i=1;i<=100;i++) {
			if(primes[i]==true)
			System.out.println(i);
		}
	}
	public static void main(String ags[])
	{
		primes=new boolean[101];
		initialise();
		print();
	}
}
