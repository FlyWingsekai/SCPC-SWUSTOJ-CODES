#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int flag=0;
typedef struct node
{
	struct node *lchild,*rchild;
	char data;
}node;
node* creat()
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
int deep(node *&l)
{
	if(l!=NULL)
{
		int d1=deep(l->lchild);
		int d2=deep(l->rchild);
		if(abs(d1-d2)>1)
		flag=1;
		return d1>d2?d1+1:d2+1;
}
}
int main()
{
	node *l=creat();
	deep(l);
	if(flag==1)
	printf("no!");
	else
	printf("yes!");
}
