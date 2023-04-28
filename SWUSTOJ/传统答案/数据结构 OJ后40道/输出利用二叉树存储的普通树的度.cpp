#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
}node;
int m=0;
node *creat()
{
	node *l;
	char ch=getchar();
	if(ch=='#')
	{
		l=NULL;
	}
	else
	{
		l=(node*)malloc(sizeof(node));
		l->data=ch;
		l->lchild=creat();
		l->rchild=creat();
	}
	return l;
}
void find(node *l,int k)
{
	if(l==NULL)
	return;
   if(m<k)
   {
   	m=k;
   }
   find(l->lchild,0);
   find(l->rchild,k+1);
}
int main()
{
	node *l;
	l=creat();
	if(l->rchild!=NULL)
	{
		printf("ERROR");
	}
	else
	{
		find(l,0);
		printf("%d",m+1);
	}
}
