#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *lchild,*rchild;
	char data;
}node;
int t=0;
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
void print(node *&l,char a)
{
	if(l!=NULL)
	{
		if(l->data==a)
	{
		if(l->lchild!=NULL)
		{
			t++;
		}
		if(l->rchild!=NULL)
		{
			t++;
		}
	}	
		print(l->lchild,a);
		print(l->rchild,a);	
	}
}
int main()
{
	node *l=creat();
	char a;
	scanf(" %c",&a);
	print(l,a);
	printf("%d",t);
}
