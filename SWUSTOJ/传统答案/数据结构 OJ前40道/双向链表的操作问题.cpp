#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *next;
	struct node *front;
	int data;
}node;
void creat(node *&l,int n)
{
	l=(node*)malloc(sizeof(node));
	node *p,*q;
	p=l;
	p->front=NULL;
	int i=0;
	for(i=0;i<n;i++)
	{
		q=(node*)malloc(sizeof(node));
		scanf("%d",&q->data);
		p->next=q;
		q->front=p;
		p=q; 
	}
	p->next=NULL;
}
int main()
{
	int n;
	scanf("%d",&n);
	node *l,*q,*p;
	p=l;
	creat(l,n);
for(int i=0;i<n;i++)
{
	p=l->next;
	while(p!=NULL)
	{
		if(p->next!=NULL)
		{
			if(p->data>p->next->data)
			{
				int t;
				t=p->data;
				p->data=p->next->data;
				p->next->data=t;
			}
		}
		p=p->next;
	 } 
}
p=l->next;
while(p!=NULL)
{
	printf("%d ",p->data);
	p=p->next;
}
}
