#include<stdio.h>
int push(int arr[],int *top,int size,int data);
int pop(int arr,int *top);
int main()
{
	int choice,res,data;
	int top=-1;
	int size=4;
	int arr[4];
	while(1)
	{
		printf("\n1]push");
		printf("\n2]pop");
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter data ");
				scanf("%d",&data);
				res=push(arr,&top,size,data);
				if(res==-1)
				{
					printf("stack is full");
				}
				else
				{
					printf("data is inserted  %d succesfully",res);
				}
				break;
			case 2:res=pop(arr,&top);
				if(res==-1)
				{
					printf("stack is empty");
				}
				else
				{
					printf("data is removed %d succesfully",res);
				}
				break;		
		}
	}
}
int push(int arr[],int *top,int size,int data)
{
	if(*top==size-1)
	return -1;
	else
	{	(*top)++;
		arr[*top]=data;
		return 1;
	}
}
int pop(int arr[],int *top)
{
	if(*top==-1)
	{
		return -1;
	}
	else
	{	return arr[(*top)--];
		
	}
	 
		
	}
}
