#include<stdio.h>
#include<stdlib.h>
typedef struct  node
{
	int data;
	struct node *next;
 }node;
 
void CL(node *&l,int n)
{
	node *s,*r;
	l = (node *)malloc(sizeof(node));
	r = l;
	for(int i = 0;i<n;i++)
	{
		s = (node *)malloc(sizeof(node));
		scanf("%d",&s->data);
		r->next = s;
		r = s;
	}
	r->next = NULL;
}

int ListLength(node *L)
{
	int n = 0;
	node *p = L;
	while(p->next!=NULL)
	{
		n++;
		p = p->next;
	}
	return (n);
}

int main()
{
	int m,a;
	node *L;
	scanf("%d",&m);
	CL(L,m);
	int len = ListLength(L);
	scanf("%d",&a);
	if(a<len&&a>0)
	printf("ok");
	else
	printf("error");
}
