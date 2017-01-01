#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#define N 4
#define INF 9999
int main()
{
	int graph[N][N];
	memset(graph, 9999, sizeof(graph));
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			graph[i][j]=INF;
		}
	}
	// create the graph
	int i,j,k,V,u,v,wt;
	printf("Enter no of edges: ");
	scanf("%d",&V);
	for(i=0;i<V;i++) {
		graph[i][i]=0;
		printf("Enter two nodes (from and to) (Starting from 1) and wt\n");
		scanf("%d %d %d",&u,&v,&wt);
		graph[u-1][v-1]=wt;
	}
	// apply floyd warshall
	int path[N][N];
	memset(fw, INF, sizeof(fw));
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			if(graph[i][j]!=INF && i!=j) {
				path[i][j]=i;
			} else {
				path[i][j]=i;
			}
		}
	}
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			for(k=0;k<N;k++) {
				if(graph[i][k]==INF || graph[k][j]==INF) {
					continue;
				}
				if((graph[i][k]+graph[k][j])<graph[i][j]) {
					if(i==1 && j==0) {
						printf("hue\n");
					}
					graph[i][j]=graph[i][k]+graph[k][j];
					path[i][j]=path[k][j];
				}
			}
		}
	}
	// if graph[i][i]<0 => -ve edge cycle
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			if(i!=j && graph[i][j]!=INF) {
				printf("%d -> %d ====> %d\n",i+1,j+1,graph[i][j]);
			}
		}
	}
	return 0;
}
