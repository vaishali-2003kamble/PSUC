#include<stdio.h>
#define v 4
#define inf 99999
int warshall(int w[v][v]);
int main()
{
	int w[v][v]={{1,inf,2,4},{5,inf,9,8},{6,inf,inf,3},{inf,inf,7,0}};
	warshall(w);
}
int warshall(int w[v][v])
{
	int p[v][v];
	int i,j,k;
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			p[i][j]=w[i][j];
		}
	}
	for(k=0;k<v;k++)
	{
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			if(p[i][k]+p[k][j]<p[i][j])
			{
				p[i][j]=p[i][k]+p[k][j];
			}
		}
	}	
	}
	printf("shortest path is :-");
		for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			if(p[i][j]==inf)
			{
				printf("inf");
			}
			else
			{
				printf("%d",p[i][j]);
			}
		}
	}
}

