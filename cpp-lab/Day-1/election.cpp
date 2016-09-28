#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>

#define ll long long int

int max(int a, int b)
{
	if(a>=b)
		return a;
	return b;
}

using namespace std;

int main()
{
	int n,i,count=0;
	int hash[7];
	memset(hash,0,sizeof(hash));
	scanf("%d",&n);
	while(n--) {
		count++;
		printf("Whom did %d vote for ? \n",count);
		int vote;
		scanf("%d",&vote);
		if(vote>=1 && vote<=5) {
			hash[vote]++;
		} else {
			hash[6]++;
		}
	}
	for(i=1;i<=5;i++) {
		printf("No of people voted for %d = %d\n",i,hash[i]);
	}
	printf("No of invalid votes = %d\n",hash[6]);
	return 0;
}

