//circular queue
#include<stdio.h>
int enqueue(int *rear,int *count,int arr[],int size,int data);
int dequeue(int *front,int *count,int arr[],int size,int *deleteelemnt);
int main()
{
	int i,choice,data,res,rear=0,front=0,deleteelemnt,count=0,size=5;
	int arr[5];
	while(1)
	{
		printf("\n1]enqueue\n");
		printf("2]dequeue\n");
		printf("enter your choice :-");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter data ");
					scanf("%d",&data);
					res=enqueue(&rear,&count,arr,size,data);
					if(res==-1)
					{
						printf("queue is full");
					}
					else
					{
						printf("enqueue elemnt is %d is inserted sucessfully",data);
					}
					break;
			case 2:
					res=dequeue(&front,&count,arr,size,&deleteelemnt);
					if(res==-1)
					{
						printf("queue is empty");
					}
					else
					{
						printf("enqueue elemnt is %d is removed sucessfully",deleteelemnt);
					}
					break;
		}
	}
}
int enqueue(int *rear,int *count,int arr[],int size,int data)
{
	if(*count==size)
	{
		return -1;
	}
	else
	{
		
		arr[*rear]=data;
		(*count)++;
		*rear=((*rear+1)%size);
		return 1;
	}
}
int dequeue(int *front,int *count,int arr[],int size,int *deleteelemnt)
{
	if(*count==0)
	{
		return -1;
	}
	else
	{
		 *deleteelemnt=arr[*front];
		 (*count)--;
		 *front=((*front+1)%size);
		 return  1;
	}
}
