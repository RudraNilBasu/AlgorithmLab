#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

void search(int a[], int n, int srch)
{
	int lo=0,hi=n-1,mid;
	while(lo<=hi) {
		mid=(lo+hi)/2;
		if(a[mid]==srch) {
			cout<<"Found at position: "<<(mid+1)<<endl;
			return;
		} else if(a[mid]>srch) {
			hi=mid-1;
		} else if(a[mid]<srch) {
			lo=mid+1;
		}
	}
	cout<<"Not Found\n";
}

int main()
{
	int n,i;
	cout<<"n: ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++) {
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<"Mininum No: "<<a[0]<<endl;
	cout<<"Maximum No: "<<a[n-1]<<endl;
	int srch;
	cout<<"No to search: ";
	cin>>srch;
	search(a, n, srch);
}
