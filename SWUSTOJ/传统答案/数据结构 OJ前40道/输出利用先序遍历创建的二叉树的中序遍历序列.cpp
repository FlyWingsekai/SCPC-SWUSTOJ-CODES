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
void out(node *&l)
{
	if(l!=NULL)
	{
		out(l->lchild);
		printf("%c",l->data);
		out(l->rchild);
    }
}
int main()
{
	node *l;
	l=creat();
	out(l);
}
