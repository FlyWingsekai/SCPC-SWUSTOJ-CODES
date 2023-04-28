#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
}node;
int t=0;
node *creat()
{
	node *l;
	char ch=getchar();
	if(ch=='#')
	l=NULL;
	else
	{
		l=(node*)malloc(sizeof(node));
		l->data=ch;
		l->lchild=creat();
		l->rchild=creat();
	}
	return l;
}
void print(node *l)
{
	if(l!=NULL)
	{
		t++;
		print(l->rchild);
	}
}
int main()
{
	node *l;
	l=creat();
	print(l);
	printf("%d",t);
}
