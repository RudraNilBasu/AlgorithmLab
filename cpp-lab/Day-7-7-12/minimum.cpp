#include <iostream>
using namespace std;

template <typename T>
void find_min(T* a, int n)
{
    T mn=a[0];
    int i;
    for(i=1;i<n;i++) {
        if(mn>a[i]) {
            mn=a[i];
        }
    }
    cout<<"Min is: "<<mn;
}

int main() {
	// your code goes here
	int n,i;
	cin>>n;
	int a[n];
	float b[n];
	cout<<"Enter int values: "<<endl;
	for(i=0;i<n;i++) {
	    cin>>a[i];
	}
	find_min(a, n);
	cout<<"Enter float values: "<<endl;
	for(i=0;i<n;i++) {
	    cin>>b[i];
	}
	find_min(b, n);
	return 0;
}
