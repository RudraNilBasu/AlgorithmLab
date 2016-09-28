import java.io.*;
class reverse
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n;
		n=Integer.parseInt(br.readLine());
		int m=n,rev=0;
		while(m>0) {
			rev=(rev*10)+m%10;
			m/=10;
		}
		System.out.println("Reversed Number "+rev);
	}
}
