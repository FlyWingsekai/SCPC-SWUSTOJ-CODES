#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
}node;
int sum=0,c=1;

node *creat()
{
	node *l;
char ch;
	scanf("%c",&ch);
	if(ch=='#')
	l=NULL;
	else
	{
		sum++;
		l=(node*)malloc(sizeof(node));
		l->data=ch;
		l->lchild=creat();
		l->rchild=creat();
	}
	return l;
}
queue<node*>q;
void judge()
{
	while(!q.empty())
	{
		node *l;
		l=(node*)malloc(sizeof(node));
		l=q.front();
		if(l->lchild==NULL)
		return ;
		else
		{
			c++;
			q.push(l->lchild);
		}
		if(l->rchild==NULL)
		return ;
		else
		{
			c++;
			q.push(l->rchild);
		}
		q.pop();
	}
}
int main()
{
	node *l=creat();
	q.push(l);
	judge();
	if(sum==c)
	printf("Y");
	else printf("N");
}

