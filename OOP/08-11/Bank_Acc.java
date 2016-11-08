class myException extends Exception
{
	void Show()
	{
		System.out.println("Low Balance");
	}
}

class Bank_Acc
{
	int accno;
	String acc_holder_name;
	String bank_name;
	String bank_branch;
	String type;
	int curent_balance;
	Bank_Acc(int accno, String acc_holder_name, String bank_name, String bank_branch, String type, int curent_balance)
	{
		this.accno=accno;
		this.acc_holder_name=acc_holder_name;
		this.bank_name=bank_name;
		this.bank_branch=bank_branch;
		this.type=type;
		this.curent_balance=curent_balance;
	}
	void deposit(int amt)
	{
		curent_balance+=amt;
	}
	void show()
	{
		System.out.println("Name = "+acc_holder_name+"\nBalance="+curent_balance);
	}
	void withdraw(int amt)
	{
		if(amt<=curent_balance) {
			curent_balance-=amt;
			return;
		}
		try{
			throw new myException();
		} catch(myException e) {
			e.Show();
		}
	}
	public static void main(String args[])
	{
		Bank_Acc ba=new Bank_Acc(23, "Rudra", "BOI", "Behala", "Savings AC", 0);
		System.out.println("Deposing Rs 100");
		ba.deposit(100);
		System.out.println("Withdrawing Rs 1000");
		ba.withdraw(1000);
		ba.show();
	}
}
