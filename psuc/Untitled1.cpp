#include<stdio.h>
struct node
{
	int data;
	struct node next;
};
int main()
{
	
}
int enqueue(int **front,int **rear,int size,int data);
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	if(*front==*rear)
		*front=*rear=temp;
	
	(*rear)->next=temp;
}

