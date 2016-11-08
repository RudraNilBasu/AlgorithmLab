class sortAR
{
	public static void main(String args[])
	{
		//System.out.println("Rudra".compareTo("Rohit"));
		int i,j;
		for(i=0;i<args.length-1;i++) {
			for(j=0;j<args.length-i-1;j++) {
				if(args[j].compareTo(args[j+1])>0) {
					//System.out.println("Swap "+args[i]+" and "+args[i+1]);
					String temp=args[j+1];
					args[j+1]=args[j];
					args[j]=temp;
				}
			}
		}
		for(i=0;i<args.length;i++) {
			System.out.println(args[i]);
		}
	}
}
