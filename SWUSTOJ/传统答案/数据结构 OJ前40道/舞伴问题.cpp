#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int front;
	int rear;
	char data[100];
}node;
void init(node *&l)
{
	l->front=-1;
	l->rear=-1;
}
void push(node*&l,char e)
{
	l->rear++;
	l->data[l->rear]=e;
}
void pop(node*&l,char &e)
{
	l->front++;
	e=l->data[l->front]; 
}
int main()
{
	node *l1,*l2;
	l1=(node*)malloc(sizeof(node));
	l2=(node*)malloc(sizeof(node));
	init(l1);
	init(l2);
	int n;
	char e,c;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf(" %c",&e);
		push(l1,e);
	}
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf(" %c",&e);
		push(l2,e);
	}
	int b;
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		pop(l1,e);
		push(l1,e);
		pop(l2,c);
		push(l2,c);
	}
	printf("%c %c",e,c);
}
