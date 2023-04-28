#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
}treenode;
int k=0;
treenode *creat()
{
	treenode *l;
	char ch;
	scanf("%c",&ch);
	if(ch=='#')
	l=NULL;
	else
	{
		l=(treenode*)malloc(sizeof(treenode));
		l->data=ch;
		l->lchild=creat();
		l->rchild=creat();
	 } 
	 return l;
}
int out(treenode *l)
{
	if(l!=NULL)
	{
	if(l->lchild==NULL&&l->rchild==NULL)
	k++;
	out(l->lchild);
	out(l->rchild);
	}
	return k;
}
int main()
{
	treenode *l;
	l=creat();
	printf("%d",out(l));
}

