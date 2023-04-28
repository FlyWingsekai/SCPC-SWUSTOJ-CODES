#include <bits/stdc++.h>
using namespace std;
int k=0;
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
}node;
node *creat()
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
int out(node *l)
{
	if(l!=NULL)
	{
		k++;
		out(l->rchild);
	}
	return k;
}
int main()
{
	node *l;
	l=creat();
	cout<<out(l);
}

