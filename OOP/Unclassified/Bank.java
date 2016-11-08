class Bank
{
	int accNo;
	int amt;
	String id;
	void init(int _a, int _amt, String _id)
	{
		accNo=_a;
		amt=_amt;
		id=_id;
	}
	void withdraw(int draw)
	{
		if(draw>amt) {
			System.out.println("Impo");
		} else {
			System.out.println("Withdrawed "+draw);
			amt-=draw;
			System.out.println("New amt = "+amt);
		}
	}
	void dep(int _amt)
	{
		System.out.println("Amout Deposited = "+_amt);
		amt+=_amt;
		System.out.println("New amt = "+amt);
	}
	void show()
	{
		System.out.println("Acc No = "+accNo+" amt = "+amt+" ID = "+id);
	}
	public static void main(String args[])
	{
		Bank b=new Bank();
		b.init(1,100,"Rudra");
		b.withdraw(10);
		b.dep(25);
		b.show();
	}
}
