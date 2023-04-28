#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data[100];
	int top;
}node;
void creat(node*&l)
{
	l=(node*)malloc(sizeof(node));
	l->top=-1; 
}
void push(node *&l,int e)
{
	l->top++;
  l->data[l->top]=e;
}
void pop(node *&l,int &e)
{
	e=l->data[l->top];
	l->top--;
}
int main()
{
	node *l;
	creat(l);
	int n,a,i;
	int e;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&e);
		push(l,e);
	}
	scanf("%d",&a);
	if(n<=a)
	{
		printf("-1");
	}
	else
	{
	for(i=0;i<=a;i++)
	{
		pop(l,e);
	}
	printf("%d",e);
	}
}
