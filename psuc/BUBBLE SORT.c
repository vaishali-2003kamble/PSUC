#include<stdio.h>
int bubblesort(int arr[],int n);
int main()
{	int n=10,i;
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	printf("\noriganl array is :-");
	for( i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	bubblesort(arr,n);
	printf("\nsorted array is :-");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	
}
int bubblesort(int arr[],int n)
{
	int startpos=0;
	int curpos=0;
	for(startpos=0;startpos<n-1;startpos++)
	{
		for(curpos=0;curpos<n-startpos-1;curpos++)
		{	if(arr[curpos]>arr[curpos+1])
		{
			int temp;
			temp=arr[curpos];
			arr[curpos]=arr[curpos+1];
			arr[curpos+1]=temp;
			
		}
		
		}
	}
}

