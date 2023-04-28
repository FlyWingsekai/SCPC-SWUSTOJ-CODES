#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}node;
void creat(node *&l,int n)
{
  l=(node*)malloc(sizeof(node));
  l->next=NULL;
   int i;
   node *p,*q;
   p=l;
   for(i=0;i<n;i++)
   {
   	q=(node*)malloc(sizeof(node));
   	scanf("%d",&q->data);
    q->next=p->next;
   p->next=q;
   }
}
 int main()
{
	node *l;
	int n;
	scanf("%d",&n);
	creat(l,n);
	int a;
	scanf("%d",&a);
	if(a>=n)
	printf("-1");
	else
	{
	for(int i=0;i<a;i++)
	{
		l=l->next;
	}
	printf("%d",l->next->data);
	}
}
