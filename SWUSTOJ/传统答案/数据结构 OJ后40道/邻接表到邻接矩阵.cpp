#include<stdio.h>
#include<stdlib.h>
int a[100][100];
typedef struct node
{
	struct node *next;
	int data;
}node;
void insert(node  b[],int i,int num)
{
	node *p=&b[i];
	while(p->next!=NULL)
	{
		p=p->next;
	}
	node* q=(node*)malloc(sizeof(node));
	q->data=num;
	q->next=NULL;
	p->next=q;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	node b[100];
	for(i=0;i<n;i++)
	{
		b[i].next=NULL;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			int num;
			char x;
			scanf("%d%c",&num,&x);
			insert(b,i,num);
			if(x=='\n')
			break;
		}
	}
	for(i=0;i<n;i++)
	{
			node *p=&b[i];
			p=p->next;
			while(p!=NULL)
			{
				a[i][p->data]=1;
				p=p->next;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
}
