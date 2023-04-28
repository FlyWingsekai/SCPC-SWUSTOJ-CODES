#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
 } node;
 int k=0;
node* creat()
{
		char ch;
		node *l;
	scanf("%c",&ch);
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
int out(node *&l)
{
	if(l!=NULL)
	{
	if(l->lchild!=NULL&&l->rchild==NULL||l->lchild==NULL&&l->rchild!=NULL)
	k++;
	out(l->lchild);
	out(l->rchild);
   }
	return  k;
}
int main()
{
	node *l;
	l=creat();
	out(l);
	printf("%d",k); 
}
