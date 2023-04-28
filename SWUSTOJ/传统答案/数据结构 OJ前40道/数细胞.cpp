#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int x[100];
	int y[100];
	int front;
	int rear;
}node;
void creat(node *&l)
{
	l=(node*)malloc(sizeof(node));
	l->rear=-1;
	l->front=-1;
}
void push(node *&l,int x,int y)
{
	l->rear++;
	l->x[l->rear]=x;
	l->y[l->rear]=y;
}
void pop(node *&l,int &x,int &y)
{
	l->front++;
	x=l->x[l->front];
	y=l->y[l->front];
}
int empty(node *&l)
{
	if(l->front==l->rear)
	return 0;
	else
	return 1;
}
int main()
{
	int a[100][100];
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	int i,j;
	int c,d,count=0;
	node *l;
	creat(l);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(a[i][j]>0)
			a[i][j]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(a[i][j]==1)
			{
				push(l,i,j);
				a[i][j]==0;
			   while(empty(l))
			   {
			   	pop(l,c,d);
			   	{
			   		if(a[c+1][d]==1)
			   		{
			   			push(l,c+1,d);
			   			a[c+1][d]=0;
					}
					   	if(a[c-1][d]==1)
			   		{
			   			push(l,c-1,d);
			   			a[c-1][d]=0;
					}
					   	if(a[c][d+1]==1)
			   		{
			   			push(l,c,d+1);
			   			a[c][d+1]=0;
					}
					    	if(a[c][d-1]==1)
			   		{
					   push(l,c,d-1);
			   			a[c][d-1]=0;
					}
				   }
			   }
			   count++; 
			}
		}
	}
	
	printf("%d",count);
}
