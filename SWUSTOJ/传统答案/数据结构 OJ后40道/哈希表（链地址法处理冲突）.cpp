#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
void insert(node ha[],int k,int num)
{
	node *p=&ha[k];
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->data=num;
	node *q=(node*)malloc(sizeof(node));
	q->data=-1;
	p->next=q;
	q->next=NULL;
}
void serch(node ha[],int k,int num)
{
	node *p=&ha[k];
	int sum=0;
	while(p!=NULL)
	{
		sum++;
		if(p->data==num)
		{
			break;
		}
		p=p->next;
	}
	if(p==NULL)
	printf("-1");
	else
	printf("%d,%d",k,sum);
}
int main()
{
int n,m,x,i;	
scanf("%d",&n);
node ha[100];
   for(i=0;i<n;i++)
   {
   	ha[i].data=-1;
   	ha[i].next=NULL;
   }
   scanf("%d",&m);
   while(m--)
   {
   	int num;
	   scanf("%d",&num);
	   insert(ha,num%n,num);
   }
   scanf("%d",&x);
   serch(ha,x%n,x);
 } 
