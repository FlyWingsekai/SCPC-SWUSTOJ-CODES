#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	int data[100];
	int front ;
	int rear;
	int k;
}node;
void init(node*&l)
{
	l=(node*)malloc(sizeof(node));
	l->front=l->rear=0;
	scanf("%d",&l->k);
	getchar();
}
bool push(node *&l,int e)
{
	if((l->rear+1)%l->k==l->front)
	return false;
	l->rear=(l->rear+1)%l->k;
	l->data[l->rear]=e;
}
bool pop(node *&l,int &e)
{
	if(l->front==l->rear)
	return false;
	else
	l->front=(l->front+1)%l->k;
	e=l->data[l->front];
}
int main()
{
	int n;
	int e,i;
	node *l;
	init(l);
		char str[100];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%[^\n]",str);
		getchar();
		if(str[0]=='i')
		{
			int t=strlen(str)-1;
			push(l,str[t]-48);
		}
		else
		pop(l,e);
	}
	while(pop(l,e))
	{
		printf("%d ",e);
	}
}
