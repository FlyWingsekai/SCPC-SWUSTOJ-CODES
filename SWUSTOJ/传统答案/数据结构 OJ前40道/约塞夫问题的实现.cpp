#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node* next;
	int data;
 } node;
 void creat(node *&l,int n)
 {
 	l=(node*)malloc(sizeof(node));
 	node *p,*q;
 	p=l;
 	for(int i=0;i<n;i++)
 	{
 	q=(node*)malloc(sizeof(node));
	 q->data=i+1;
	 p->next=q;
	 p=q;
	 p->next=NULL;
	}
	p->next=l->next;
 }
 int main()
 {
 	int n;
 	node *l; 
 	scanf("%d",&n);
 	creat(l,n);
 	node *p;
 	p=l;
 	int a;
 	scanf("%d",&a);
 	while(n!=1)
 	{
 	for(int i=0;i<a-1;i++)
 	{
 		p=p->next;	
	}
	p->next=p->next->next;
	n--;
	 }
	 printf("%d",p->data);
 }
