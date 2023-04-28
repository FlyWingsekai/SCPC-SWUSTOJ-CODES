#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
void insert(node b[],int x,int y)
{
	node *p=&b[x];
	while(p->next!=NULL)
	{
		p=p->next;
	}
	node *q=(node*)malloc(sizeof(node));
	q->data=y;
	q->next=NULL;
	p->next=q;
}
int main()
{
	int n,m,i;
	scanf("%d",&n);
	scanf("%d",&m);
	node b[100];
	for(i=0;i<n;i++)
	{
		b[i].next=NULL;
	}
	for(i=0;i<m;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		insert(b,x,y);
	}
	int num=0;
	for(i=0;i<n;i++)
	{
		num=0;
		node *p=&b[i];
		p=p->next;
		while(p!=NULL)
		{
			num++;
			p=p->next;
		}
		printf("%d\n",num);
	}
}
