#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *next;
	char data;
}node;
void creat(node*&l)
{
	l->next=NULL;
	char str[100];
	scanf("%s",str);
	node *q,*p;
	p=l;
	int i=0;
	while(str[i]!='\0')
	{
		q=(node*)malloc(sizeof(node));
		q->data=str[i];
		p->next=q;	
		p=q;
        i++;
	}
	p->next=NULL;
}
int main()
{
	node *l,*l1,*l2,*l3;
	node *p,*q;

	node *k,*t;
	
	node *r,*s;
	
	l=(node*)malloc(sizeof(node));
	creat(l);
	l1=(node*)malloc(sizeof(node));
		p=l1;
	l2=(node*)malloc(sizeof(node));
	k=l2;
	l3=(node*)malloc(sizeof(node));
	r=l3;
	while(l->next!=NULL)
	{
		if(l->next->data>='0'&&l->next->data<='9')
		{
			q=(node*)malloc(sizeof(node));
			q->data=l->next->data;
			p->next=q;
				p=q;
				q->next=NULL;
		}
		else if((l->next->data>='a'&&l->next->data<='z')||l->next->data>='A'&&l->next->data<='Z')
		{
				t=(node*)malloc(sizeof(node));
			    t->data=l->next->data;
			    k->next=t;
				k=t;
				t->next=NULL;
		}
		else
		{
				s=(node*)malloc(sizeof(node));
			    s->data=l->next->data;
			    r->next=s;
				r=s;
				s->next=NULL;
		}
		l->next=l->next->next;
	}
	while(l1->next!=NULL)
	{
		printf("%c",l1->next->data);
	l1->next=l1->next->next;
	}
	printf("\n");
	while(l2->next!=NULL)
	{
		printf("%c",l2->next->data);
        l2->next=l2->next->next;
	}
	printf("\n");
	while(l3->next!=NULL)
	{
		printf("%c",l3->next->data);
		l3->next=l3->next->next;
	}
	printf("\n");
}
