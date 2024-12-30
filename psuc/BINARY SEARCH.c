#include<stdio.h>
int binarysearch(int low,int high,int target,int arr[]);
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int s,low=0,high=n-1;
	int target=6;
	s=binarysearch(low,high,target,arr);
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
int binarysearch(int low,int high,int target,int arr[])
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==target)
		{
			return mid;
		}
		else
		{
			if(arr[mid]<target)
			{
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
		}	
	}
	return -1;
	
}
