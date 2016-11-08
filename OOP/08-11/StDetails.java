import java.io.*;
class StDetails
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		Student st[]=new Student[3];
		int i,j;
		for(i=0;i<st.length;i++) {
			st[i]=new Student();
			System.out.println("Enter the name of "+(i+1)+"Student");
			String name=br.readLine();
			System.out.println("Enter the Roll of "+(i+1)+"Student");
			int roll=Integer.parseInt(br.readLine());
			System.out.println("Enter the marks1 of "+(i+1)+"Student");
			int marks1=Integer.parseInt(br.readLine());
			System.out.println("Enter the marks2 of "+(i+1)+"Student");
			int marks2=Integer.parseInt(br.readLine());
			System.out.println("Enter the marks3 of "+(i+1)+"Student");
			int marks3=Integer.parseInt(br.readLine());
			//System.out.println("DONE");
			st[i].init(name, roll, marks1, marks2, marks3);
			st[i].calcPerc();
			//System.out.println("DONE");
		}
		String op=args[0];
		if(op.equals("Sub1")) {
			for(i=0;i<st.length-1;i++) {
				for(j=0;j<st.length-i-1;j++) {
					if(st[j].marks1>st[j+1].marks2) {
						Student temp=st[j];
						st[j]=st[j+1];
						st[j+1]=temp;
					}
				}
			}
		} else if(op.equals("Sub2")) {
			for(i=0;i<st.length-1;i++) {
				for(j=0;j<st.length-i-1;j++) {
					if(st[j].marks2>st[j+1].marks2) {
						Student temp=st[j];
						st[j]=st[j+1];
						st[j+1]=temp;
					}
				}
			}
		} else if(op.equals("Sub3")) {
			for(i=0;i<st.length-1;i++) {
				for(j=0;j<st.length-i-1;j++) {
					if(st[j].marks3>st[j+1].marks3) {
						Student temp=st[j];
						st[j]=st[j+1];
						st[j+1]=temp;
					}
				}
			}
		} else if(op.equals("perc")) {
			for(i=0;i<st.length-1;i++) {
				for(j=0;j<st.length-i-1;j++) {
					if(st[j].perc>st[j+1].perc) {
						Student temp=st[j];
						st[j]=st[j+1];
						st[j+1]=temp;
					}
				}
			}
		}
		System.out.println("-----------------");
		for(i=0;i<st.length;i++) {
			System.out.println(st[i].name+"\t"+st[i].marks1+"\t"+st[i].marks2+"\t"+st[i].marks3+"Perc = "+st[i].perc);
		}
		System.out.println("-----------------");
	}
}
