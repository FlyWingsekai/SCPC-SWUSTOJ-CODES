#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *next;
 }node;
void CL(node *&l,int n)
{
	node *s,*r;
	l= (node *)malloc(sizeof(node));
	r = l;
	for(int i = 0;i<n;i++)
	{
		s = (node *)malloc(sizeof(node));
		scanf(" %c",&s->data);
		r->next = s;
		r = s; 
	}
	r->next = NULL;
 }
 void DispList(node *l)
 {
 	node *p = l->next;
 	while(p!=NULL)
	{
	 	printf("%c ",p->data);
	 	p=p->next;
	}
  } 
 int main()
 {
 	int i=0,n1,n2;
 	node *L1,*L2,*q;
 	scanf("%d",&n1);
 	CL(L1,n1);	
	scanf("%d",&n2);
 	CL(L2,n2);
	q = L1->next;
 	while(q->next!=NULL)
 	{
 		q = q->next;
	}
	q->next= L2->next;
	DispList(L1);
 }
