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
		{
			if(l->lchild==NULL)
			printf("L:#,");	
			else
			printf("L:%c,",l->lchild->data);
			
			if(l->rchild==NULL)
			printf("R:#");
			else
			printf("R:%c",l->rchild->data);
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
}
