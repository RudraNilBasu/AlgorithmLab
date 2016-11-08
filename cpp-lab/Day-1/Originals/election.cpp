#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	int hash[7];
	memset(hash,0,sizeof(hash));
	int n,i,count=0;
	printf("Enter no of voters\n");
	scanf("%d",&n);
	while(n--) {
		count++;
		printf("Whom did voter#%d vote ? (1-5):  ",count);
		int vote;
		scanf("%d",&vote);
		if(vote>=0 && vote <=5) {
			hash[vote]++;
		} else {
			hash[6]++;
		}
	}
	for(i=1;i<=5;i++) {
		printf("No of users who voted for %d = %d\n",i,hash[i]);
	}
	printf("Users with invalid votes = %d\n",hash[6]);
}
