import java.io.*;
class sum
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n;
		n=Integer.parseInt(br.readLine());
		int m=n,rev=0,sum=0;
		while(m>0) {
			sum+=(m%10);
			m/=10;
		}
		System.out.println("Sum of each digits "+sum);
	}
}
