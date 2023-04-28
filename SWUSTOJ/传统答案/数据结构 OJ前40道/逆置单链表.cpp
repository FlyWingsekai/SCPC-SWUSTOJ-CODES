#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *next;
}node;
void creat(node *&l)
{
	node *p,*q;
	l=(node*)malloc(sizeof(node));
	int n,i;
	p=l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		q=(node*)malloc(sizeof(node));
		scanf(" %c",&q->data);
		p->next=q;
		p=q; 
	}
	p->next=NULL;
}
int main()
{
	node *l;
	creat(l);
	node *p,*q;
	p=l->next;
	q=p->next;
	p->next=NULL;
	p=q;
	while(p!=NULL)
	{
		q=q->next;
		p->next=l->next;
		l->next=p;
		p=q;
	}
p=l;
while(p->next!=NULL)
{
	printf("%c ",p->next->data);
	p=p->next;
}
}
