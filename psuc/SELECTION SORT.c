#include<stdio.h>
int selectionsort(int arr[],int n);
int main()
{	int n=10,i;
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	printf("\noriganl array is :-");
	for( i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	selectionsort(arr,n);
	printf("\nsorted array is :-");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	
}
int selectionsort(int arr[],int n)
{
	int startpos=0;
	while(startpos<n-1)
	{
		int minpos=startpos;
		int curpos=startpos+1;
		while(curpos<n)
		{
			if(arr[curpos]<arr[minpos])
			{
				minpos=curpos;
			}
			curpos++;
		}
		int temp;
		temp=arr[minpos];
		arr[minpos]=arr[startpos];
		arr[startpos]=temp;
		startpos++;
	}
	
}
