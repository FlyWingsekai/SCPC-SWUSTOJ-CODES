#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<iostream>
using namespace std;
typedef struct node
{
    char data;
	struct node *lchild;
	struct node *rchild;
}node;
node *creat()
{
	char ch=getchar();
	node *l;
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
void jiaohuan(node *&l)
{
	if(l!=NULL)
	{
		node *p;
		p=(node *)malloc(sizeof(node));
		p=l->lchild;
		l->lchild=l->rchild;
		l->rchild=p;
	    jiaohuan(l->lchild);
	    jiaohuan(l->rchild);
	}
}
void print1(node *l)
{
	if(l!=NULL)
	{
		print1(l->lchild);
		printf("%c",l->data);
		print1(l->rchild);
	}
}
void print2(node *l)
{
	if(l!=NULL)
	{	
	   printf("%c",l->data);
		print2(l->lchild);
		print2(l->rchild);
	}
}
int main()
{
	node *l=creat(); 
	jiaohuan(l);
	print1(l);
	cout<<endl;
	print2(l);
 } 
