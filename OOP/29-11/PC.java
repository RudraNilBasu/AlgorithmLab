class Q
{
	int n;
	int size=2;
	int items=0;
	/*
	void inc()
	{
		items++;
		if(items>=size) {
			System.out.println("Queue is full");
		}
	}
	*/
	boolean valueSet=false;
	synchronized int get()
	{
		while(!valueSet) {
			try {
				wait();
			} catch(InterruptedException e) {
				System.out.println("Interrupt! ");
			}
		}
		//items--;
		System.out.println("Got: "+n);
		valueSet=false;
		notify();
		return n;
	}
	synchronized void put(int n)
	{
		/*
				items++;
				System.out.println("Items="+items);
				if(items>=size) {
					System.out.println("Queue is full");
				}
		*/
		while(valueSet) {
			try {
				System.out.println(n+" is Waiting to be put.");
				wait();
			} catch(InterruptedException e) {
				System.out.println("Interrupt! ");
			}
		}
		this.n=n;
		valueSet=true;
		System.out.println("Put: "+n);
		notify();
	}
}
class Producer implements Runnable
{
	Q q;
	Producer(Q q)
	{
		this.q=q;
		new Thread(this, "Producer").start();
	}
	public void run()
	{
		int i=0;
		while(i<10) {
			//q.inc();
			q.put(i++);
		}
	}
}
class Consumer implements Runnable
{
	Q q;
	Consumer(Q q)
	{
		this.q=q;
		new Thread(this, "Consumer").start();
	}
	public void run()
	{
		while(true) {
			q.get();
		}
	}
}
class PC
{
	public static void main(String args[])
	{
		System.out.println("Control-C to Stop.");
		Q q=new Q();
		new Producer(q);
		new Consumer(q);
	}
}

