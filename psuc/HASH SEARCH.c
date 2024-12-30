#include<stdio.h>
int hashsearch(int arr[],int data,int size);
int main()
{
	int size=10;
	int arr[10]={0,90,0,0,0,0,0,0,0,0};
	int data=90,s;
	s=hashsearch(arr,data,size);
	if(s!=-1)
	{
		printf("data is found at index %d",s);
	}
	else
	{
		printf("data is not found");
	}
}
int hashsearch(int arr[],int data,int size)
{	int i;
	int index=data%size;
	for(i=0;i<size-1;i++)
	{
		if(arr[index+i]==data)
		{
			return (index+i);
			
		}
	}
	return -1;
}
