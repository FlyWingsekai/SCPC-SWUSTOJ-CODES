#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *lchild,*rchild;
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
void print(node *&l,char a)
{
	if(l!=NULL)
	{
		if(l->data==a)
		printf("#");
			
	else if(l->lchild!=NULL&&l->lchild->data==a)
		printf("%c",l->data);
		
		else if(l->rchild!=NULL&&l->rchild->data==a)
		printf("%c",l->data);
		else
		{
		print(l->lchild,a);
		print(l->rchild,a);	
		}
	}
}
int main()
{
	node *l=creat();
	char a;
	scanf(" %c",&a);
	print(l,a);
}
