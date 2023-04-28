#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *lchild;
	struct node *rchild;
	char data;
}node;
int k=0,a[100];
node *creat()
{
	node *l;
	char ch;
	scanf("%c",&ch);

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
int sum(node *&l,int t)
{
	int lchild,rchild;
	if(l==NULL)
	return 0;
	else
	{
  a[t]++;
  if(k<a[t])
  k=a[t];
  sum(l->lchild,t+1);
  sum(l->rchild,t+1);
 }
 return k;
}
int main()
{
	node *l;
	l=creat();
	printf("%d",sum(l,1));
}
