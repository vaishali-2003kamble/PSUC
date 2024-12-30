#include<stdio.h>
int hashstore(int arr[],int data,int size);
int main()
{
	int size=10,i;
	int arr[size];
	for(i=0;i<size;i++)
	{
		arr[i]=0;
	}
	hashstore(arr,23,size);
	hashstore(arr,20,size);	
	for(i=0;i<size;i++)
	{
		printf(" %d",arr[i]);
	}
	
	
}
int hashstore(int arr[],int data,int size)
{	int i;
	int index=data%size;
	for(i=0;i<size;i++)
	{
		if(arr[index+i]==0)
		{
			arr[index+i]=data;
			break;
		}
	}
}
