#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *lchild;
	struct node *rchild;
	char data;
}node;
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
int sum(node *&l)
{
	int lchild,rchild;
	if(l==NULL)
	return 0;
	else
	{
	lchild=sum(l->lchild);
	rchild=sum(l->rchild);
	return lchild>rchild?lchild+1:rchild+1;
}
}
int main()
{
	node *l;
	l=creat();
	printf("%d",sum(l));
}
