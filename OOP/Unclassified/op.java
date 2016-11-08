class op
{
	public static void main(String args[])
	{
		int i;
		int a=Integer.parseInt(args[0]);
		int b=Integer.parseInt(args[1]);
		System.out.println("Sum="+(a+b));
		int max,min;
		if(a>b) {
			max=a;
			min=b;
		} else {
			max=b;
			min=a;
		}
		System.out.println("Max="+max+"\nMin="+min);

	}
}
