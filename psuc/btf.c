#include<stdio.h>
void enqueue(int *front,int *rear,int queue[],int sdata);
int dequeue(int *front,int *rear,int queue[],int ddata);
void bfs(int vertex,int a[vertex][vertex],int queue[],int visited[],int status[],int sdata);
int main()
{
	int vertex,sdata,queue[vertex],visited[vertex],status[vertex];
	int i=0,j=0;
	printf("Enter no of nodes:\n");
	scanf("%d",&vertex);
	int a[vertex][vertex];
	printf("Enter adjecensy matrix:\n");
	for(i=0;i<vertex;i++)
	{
		for(j=0;j<vertex;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Adjecensy matrix is:\n");
	for(i=0;i<vertex;i++)
	{
		for(j=0;j<vertex;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter start node: ");
	scanf("%d",&sdata);
	
	bfs(vertex,a,queue,visited,status,sdata);
	printf("startind node is ");
	
}
void bfs(int vertex,int a[vertex][vertex],int queue[],int visited[],int status[],int sdata)
{
	int n,j,front=-1,rear=-1,ddata;
	for(j=0;j<vertex;j++)
	{
		status[j]=1;
	}
	enqueue(&front,&rear,queue,sdata);
	status[sdata]=2;
	int i=0;
	while(rear!=-1)
	{
	   	n=dequeue(&front,&rear,queue,ddata);
	   	for(j=0;j<vertex;j++)
	   	{
		   if((n!=j) && (a[n][j]==1) && (status[j]==1))
		   {
		   	 enqueue(&front,&rear,queue,j);
		   	 status[j]=2;
		   }
	    }
	    visited[i]=n;
	    printf("%d",n);
	    status[n]=3;
	    i++;
	}
}
void enqueue(int *front,int *rear,int queue[],int sdata)
{
	if(*front==-1)
	{
		*front=*rear=0;
		queue[*rear]=sdata;
	}
	(*rear)=(*rear)+1;
	queue[*rear]=sdata;
}
int dequeue(int *front,int *rear,int queue[],int ddata)
{
	ddata=queue[*front];
	if(*front==*rear)
	   *front=*rear=-1;
	   
	(*front)=(*front)+1;
	return ddata;
}
