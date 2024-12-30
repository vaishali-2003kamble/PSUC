#include<stdio.h>
#define max 100
int dfs(int arr[max][max],int n,int start);
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
	dfs(arr,n,start);
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			printf("%d",arr[i][j]);
//		}
//	}
	
}
int dfs(int arr[max][max],int n,int start)
{
	int visited[max]={0};
	int stack[max];
	int top=-1;
	int j,v;
	stack[top++]=start;
	visited[start]=1;
	while(top!=-1)
	{
		 v=stack[top--];
			
		for(j=0;j<n;j++)
		{
		if(arr[v][j]!=0 && !visited[j])
		{	
			visited[j]=1;
			stack[++top]=j;
		}
		
		}
	 printf("%d",v);	
	}
	
	
}
