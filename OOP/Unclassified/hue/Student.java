/* To design a class Student. The class should have the following data members:
   ->name ->roll ->sub_marks ->sports_marks ->grades
   The class should have the following functions:
   -> initialize values for data members ->calculate total marks ->display total marks ->display grade
 */
import java.util.*;
class Student
{
	private static String name;
	private static long roll;
	private static int submarks,sportsmarks;
	private void init()
	{
		roll=submarks=sportsmarks=0;
		name="";
	}
	private long total()
	{
		return submarks+sportsmarks;
	}
	private void print()
	{
		System.out.println("Subject Marks: "+submarks+" out of 50.");
		System.out.println("Sports Marks: "+sportsmarks+" out of 50.");
		System.out.println("Total Marks: "+(submarks+sportsmarks)+" out of 100.");
	}
	private char grade()
	{
		long total=submarks+sportsmarks;
		if(total>90)return 'A';
		else if(total<=90 && total >=80)return 'B';
		else if(total<80 && total>=70)return 'C';
		else return 'D';
	}
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		Student obj=new Student();
		obj.init();
		System.out.println("Enter name of student:");
		name=sc.nextLine();
		System.out.println("Enter roll no., subject marks(out of 50) and sports marks(out of 50):");
		roll=sc.nextLong();
		submarks=sc.nextInt();
		sportsmarks=sc.nextInt();
		System.out.println("The total is "+obj.total());
		System.out.println("The grade of the student is: "+obj.grade());
	}
}
