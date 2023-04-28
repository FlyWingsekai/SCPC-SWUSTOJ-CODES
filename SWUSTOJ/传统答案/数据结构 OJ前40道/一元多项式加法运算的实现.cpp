#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	int exp;
	struct node *next;
 } node;
 void creat(node *&l)
 {
 	l=(node*)malloc(sizeof(node));
 	node *p,*q;
 	p=l;
 	int a,b;
 	scanf("%d,%d",&a,&b);
 	while(a||b)
 	{
 		q=(node*)malloc(sizeof(node));
 		q->data=a;
 		q->exp=b;
 		p->next=q;
 		q->next=NULL;
 		p=q;
 		scanf("%d,%d",&a,&b);
	 }
 }
 void hebing(node *&l1,node *&l2)
 {
 	node *p,*q,*r;
 	p=l1;
 	q=l1->next;
 	r=l2->next;	
 	while(q&&r)
 	{
 		if(q->exp<r->exp)
 		{
 			p=q;
 			q=q->next;
		 }
		 else if(q->exp>r->exp)
		 {
		 	l2->next=r->next;
		 	r->next=q;
		 	p->next=r;
		 	r=l2->next;
		 	p=p->next;
		 }
		 else
		 {
		 	int k=q->data+r->data;
			 if(k!=0)
			 {
			 	q->data=k;
				 p=q;
				 q=p->next;
				 r=r->next; 
			  } 
			  else
			  {
			  	p->next=q->next;
			  	q=p->next;
			  	r=r->next;
			  }
		 }
	 }
	 if(r!=NULL)
	 {
	 	p->next=r;
	 }
 }
 int main()
 {
 	node *l1,*l2;
 	creat(l1);
 	creat(l2);
 	hebing(l1,l2);
 	node *p=l1->next;
 	while(p!=NULL)
 	{
 		if(p->next!=NULL)
 		printf("%dx^%d+",p->data,p->exp);
 		else
 			printf("%dx^%d",p->data,p->exp);
 			p=p->next;
	 }
 }
