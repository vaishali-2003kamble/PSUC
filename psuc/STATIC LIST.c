#include<stdio.h>
int insertbegin(int a[],int *last,int max,int curpos,int begin,int data);
int insertatspecific(int a[],int *last,int max,int curpos,int data,int pos);
int insertatend(int a[],int *last,int data ,int max);
int deletebegin(int *last,int a[],int curpos,int *ddata);
int deleteatsepefic(int *last,int a[],int curpos,int pos,int *ddata);
int deleend(int *last,int a[],int curpos,int *ddata);
int	traverse(int *last,int curpos,int a[]);
int main()
{	int max=5;
	int a[max],curpos,ddata,begin=0;
	int choice,data,res,pos,last=-1;
	while(1)
	{
		printf("\n1]insert at begin\n");
		printf("\n2]insrt at specific\n");
		printf("\n3]insert at end \n");
		printf("\n4]delete at begin\n");
		printf("\n5]delete at specific\n");
		printf("\n6]delete at end \n");
		printf("\n7]traverse the list\n");
		printf("enetr your choice :-");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter data ");
				scanf("%d",&data);
				res=insertbegin(a,&last,max,curpos,begin,data);
				if(res==-1)
				{
					printf("data is inserted sucefully");
				}
				else
				{
					pritnf("data is not inserted");
				}
				break;
				case 2:printf("enter data ");
				scanf("%d",&data);
				res=insertatspecific(a,&last,max,curpos,data,pos);
				if(res==-1)
				{
					printf("data is inserted sucefully");
				}
				else
				{
					pritnf("data is not inserted");
				}
				break;
				case 3:printf("enter data ");
				scanf("%d",&data);
				res=insertatend(a,&last,curpos,begin,max,data);
				if(res==-1)
				{
					printf("data is inserted sucefully");
				}
				else
				{
					pritnf("data is not inserted");
				}
				break;
				case 4:deletebegin(a,&last,curpos,&ddata);
					if(res==-1)
					{
						printf("list is empty");
					}
					else
					{
						printf("data is removed %d sucessfully",res);
					}
					break;
					case 5:printf("enetr postion");
						scanf("%d",&pos);
					deletebegin(a,&last,curpos,&ddata,pos);
					if(res==-1)
					{
						printf("list is empty");
					}
					else
					{
						printf("data is removed %d sucessfully",res);
					}
					break;
					case 6:deletebegin(a,&last,curpos,&ddata);
					if(res==-1)
					{
						printf("list is empty");
					}
					else
					{
						printf("data is removed %d sucessfully",res);
					}
					break;
					case 7:printf("elemnt are :-");
					res=traverse(&last,a,curpos);
					if(res==-1)
					
						printf("list is empty");
					
					break;
					
					
					
					
					
				
		}
	}
}
int insertbegin(int a[],int *last,int max,int curpos,int begin,int data)
{
	if(*last==-1)
	{
		a[curpos]=data;
		*last=*last+1;
		return 1;
	}
	
	else
	{
		if(*last<max-1)
		{
			//a[curpos]=data;
			for(curpos=*last;curpos>begin;curpos--)
			{
				a[curpos+1]=a[curpos];
			}
			a[begin]=data;
			*last=*last+1;
			return 1;
		}
		else
		{
			return -1;
		}
	}
}
int insertatspecific(int a[],int *last,int max,int curpos,int data,int pos)
{
	if(*last==-1)
	return -1;
	else
	{
	
			
			if(pos>=0 && pos<=*last)
			{
				for(curpos=*last;curpos>pos;curpos--)
			{
				a[curpos]=a[curpos+1];
			}
			a[pos]=data;
			*last=*last+1;
			return 1;
			}
		
		
	
	}
}
int insertatend(int a[],int *last,int data ,int max)
{
	if(*last==-1)
	{
		a[*last]=data;
		*last=*last+1;
		return 1;
	}
	else
	{	if(*last==max-1)
		{
			return -1;
		}
		else
		{
		a[*last+1]=data;
		*last=*last+1;
		return 1;
		}
	
		
	}
}

int deletebegin(int *last,int a[],int curpos,int *ddata)
{	
	if(*last==-1)
	return -1;
	
	else
	{	
		*ddata=a[curpos];
		for(curpos=0;curpos<*last;curpos++)
		{
				a[curpos]=a[curpos+1];
		}
		
	}
	//*deledata=a[curpos];
	*last=*last-1;
	return 1;	
}

int deleteatsepefic(int *last,int a[],int curpos,int pos,int *ddata)
{
		if(*last==-1)
	return -1;
	
	else
	{	
		*ddata=a[pos];
		if(pos>=0 && pos<=*last)
		{
		for(curpos=0;curpos<*last;curpos++)
		{
				a[curpos]=a[curpos+1];
		}
		}	
			//*deledata=a[curpos];
	*last=*last-1;
	return 1;
	}

}


int deleend(int *last,int a[],int curpos,int *ddata)
{
	if(*last==-1)
	return -1;
	else
	{
		*ddata=a[*last];
		*last=*last-1;
		return 1;
	}
}

int	traverse(int *last,int curpos,int a[])
{
		if(*last==-1)
	return -1;
	else
	{
			for(curpos=0;curpos<*last;curpos++)
			{
				printf("%d",a[curpos]);
			}
	}
}

