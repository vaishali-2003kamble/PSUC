#include<stdio.h>
int linearsearch(int target,int arr[],int n);
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=2,s;
	s=linearsearch(target,arr,n);
	if(s!=-1)
	{
		printf("data is found at index %d",s);
	}
	else
	{
		printf("data is not found");
	}
	return 0;
}
int linearsearch(int target,int arr[],int n)
{
	int curpos=0;
	while(curpos<n)
	{
		if(arr[curpos]==target)
		{
			return curpos;
		}
		curpos++;
	}
	return  -1;
}
