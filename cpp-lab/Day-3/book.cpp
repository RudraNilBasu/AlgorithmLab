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
		cout<<"Name: "<<title<<endl;
		cout<<"Author: "<<author<<endl;
		cout<<"Publisher: "<<publisher<<endl;
		cout<<"Price: "<<price<<endl;
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
		string author,title,publisher;
		float price;
		cin>>author>>title>>price>>publisher;
		Book x(author, title, price, publisher);
		library.push_back(x);
	}
	return 0;
}

