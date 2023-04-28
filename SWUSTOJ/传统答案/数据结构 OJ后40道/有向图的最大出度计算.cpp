#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *next;
	int data;
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
	p->next=q;
	q->next=NULL;
}
int main()
{
	int num[100]={0};
	int a[100][100];
	node b[100];
	int n,e,i,j;
	int x,y;
	scanf("%d",&n);
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		b[i].next=NULL;
	}
	for(i=0;i<e;i++)
	{
		scanf("%d%d",&x,&y);
		insert(b,x,y);
	}
	for(i=0;i<e;i++)
	{
		node *p=&b[i];
		p=p->next;
		while(p!=NULL)
		{
			a[i][p->data]=1;
			p=p->next;
		}
	}
	int sum=0;
	int max=-1;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
	
			if(a[i][j]>0)
			{
				sum++;
				num[i]++;
			}
		}
			if(max<sum)
		max=sum;
	}
	printf("%d\n",max);
	for(i=0;i<n;i++)
	{
		if(num[i]==max)
		printf("%d",i);
	}
}
