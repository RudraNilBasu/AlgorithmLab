#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

typedef struct stats {
	char name[50];
	int runs;
	int innings;
	int not_out;
	float average;
}stats;

int main()
{
	int i,n;
	char strtr[10];
	//scanf("%d",&n);
	//stats players[n];
	vector<stats> g;
	/*
	for(i=0;i<n;i++) {
		printf("Enter name:");
		scanf("%s",players[i].name);
		printf("Enter runs, innings, not_out for %s\n",players[i].name);
		scanf("%d %d %d",&players[i].runs,&players[i].innings,&players[i].not_out);
		players[i].average=players[i].runs*1.0/players[i].innings;
	}
	*/
	int ans;
	while(1) {
		stats players;
		printf("Enter name:");
		scanf("%s",players.name);
		printf("Enter runs, innings, not_out for %s\n",players.name);
		scanf("%d %d %d",&players.runs,&players.innings,&players.not_out);
		players.average=players.runs*1.0/players.innings;
		g.push_back(players);
		printf("Want more ?(1/0)\nyes=1\tno=0\n");
		scanf("%d",&ans);
		if(ans==0) {
			break;
		}
	}
	printf("Name\tRuns\tInnings\tNot Out\tAverage\n");
	for(i=0;i<g.size();i++) {
		printf("%s\t%d\t%d\t%d\t%f\n",g[i].name,g[i].runs,g[i].innings
				,g[i].not_out, g[i].average);
	}
	return 0;
}
