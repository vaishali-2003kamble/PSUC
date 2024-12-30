#include<stdio.h>
#define max 100
int bfs(int arr[max][max],int n,int start);
int main()
{
	int n;
	printf("enter number of nodes :-");
	scanf("%d",&n);
	int i,j;
//	int max=100;
	int arr[max][max];
	printf("enter adjecncy matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int start;
	printf("enter staring node :-");
	scanf("%d",&start);
	bfs(arr,n,start);
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			printf("%d",arr[i][j]);
//		}
//	}
	
}
int bfs(int arr[max][max],int n,int start)
{
	int visited[max]={0};
	int queue[max];
	int front=-1,rear=-1;
	int j,v;
	queue[++rear]=start;
	visited[start]=1;
	while(front!=rear)
	{
		 v=queue[++front];
		for(j=0;j<n;j++)
		{
		if(v!=j && arr[v][j]!=0 && visited[j]==0)
		{	
			visited[j]=1;
			queue[++rear]=j;
		}
		
		}
	printf(" %d",v);		
	}
	
	
}
