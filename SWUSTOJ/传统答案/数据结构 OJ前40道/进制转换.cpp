#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data[100];
	int top;
}node;
void creat(node *&l)
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
	int n,t;
	int e;
	scanf("%d",&n);
	while(n>=1)
	{
		t=n;
		t=t%2;
		push(l,t);
		n=n/2;
	}
	while(l->top!=-1)
	{
		pop(l,e);
		printf("%d",e);
	}
}
