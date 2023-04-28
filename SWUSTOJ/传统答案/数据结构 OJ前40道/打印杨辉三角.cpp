#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data[100];
	int front;
	int rear;
}node;
void creat(node*&l)
{
	l=(node*)malloc(sizeof(node));
	l->front=0;
	l->rear=0;
};
void push(node *&l,int e)
{
	l->data[l->rear]=e;
	l->rear++;
}
void pop(node *&l,int &e)
{
	e=l->data[l->front];
	l->front++;
}
void get(node *&l,int &e)
{
	e=l->data[l->front];
}
int main()
{
	node *l;
	creat(l);
	int i;
	int a=0,b=0;
	int n;
	push(l,0);
	push(l,1);
	push(l,0);
	scanf("%d",&n);
	if(n==1)
	printf("1 \n");
	else
	{
		printf("1 \n");
		for(i=1;i<n;i++)
		{
		while(1)
		{
			pop(l,a);
			get(l,b);
			if(b!=0)
			{
				printf("%d ",a+b);
				push(l,a+b);
			}
			else
			{
				printf("%d \n",a+b);
				push(l,a+b);
				push(l,0);
				break;
			}
		}
	}
}
}

