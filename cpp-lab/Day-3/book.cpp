#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iostream>

#define ll long long int
#define ull unsigned ll

#define PI 3.14159265
//#define DEBUG(X) cout << (X) << endl;
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

// inputs
#define inpd(x) scanf("%d",&x)
#define inpc(x) scanf("%c",&x)

using namespace std;

int max(int a, int b)
{
	if(a>=b)
		return a;
	return b;
}

int max3(int a, int b, int c)
{
	return max(a,max(b,c));
}

int gcd(int a, int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

class Book {
	string author;
	string title;
	float price;
	string publisher;
	public:
	Book() {}
	Book(string author, string title, float price, string publisher)
	{
		this->author=author;
		this->title=title;
		this->price=price;
		this->publisher=publisher;
	}
	void display()
	{
		cout<<"-----------------\n";
		cout<<"Name: "<<title<<endl;
		cout<<"Author: "<<author<<endl;
		cout<<"Publisher: "<<publisher<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"-----------------\n";
	}
	bool search(string _title, string _author)
	{
		return (title==_title) && (author==_author);
	}
};

int main()
{
	int n,i;
	printf("Enter no of books in library:");
	cin>>n;
	vector<Book> library;
	//Book library[n];
	for(i=0;i<n;i++) {
		//scanf("%s",library[i]->author);
		cout<<"Enter author, title, price, publisher of this book\n";
		string author,title,publisher;
		float price;
		cin>>author>>title>>price>>publisher;
		Book x(author, title, price, publisher);
		library.push_back(x);
	}
	cout<<"Done\n";
	string author,title;
	bool flag=false;
	cout<<"Enter author to search:";
	cin>>author;
	cout<<"Enter title of the book to search: ";
	cin>>title;
	for(i=0;i<n;i++) {
		if( library[i].search(title, author) ) {
			library[i].display();
			flag=true;
		}
	}
	if(!flag) {
		cout<<"Not present\n";
	}
	return 0;
}

