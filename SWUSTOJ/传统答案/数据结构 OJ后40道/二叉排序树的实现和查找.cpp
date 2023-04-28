#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *lchild,*rchild;
}node;
void inserch(node *&l,int n)
{
	if(l==NULL)
	{
		l=(node*)malloc(sizeof(node));
		l->data=n;
		l->lchild=NULL;
		l->rchild=NULL;
		
	}
	else
	{
		if(n<l->data)
		{
			inserch(l->lchild,n);
		}
		else
		{
			inserch(l->rchild,n);
		}
	}
}
node *creat(int a[],int n)
{
	node *l=NULL;
	int i;
	for(i=0;i<n;i++)
	{
		inserch(l,a[i]);
	}
	return l;
}
int f=0;
void serch(node *&l,int b,int &t)
{
	if(l==NULL)
	return;
	t++;
	if(l->data==b)
	{
		f=1;
		return ;
	}
	else if(b<l->data)
	{
		serch(l->lchild,b,t);
	}
	else
	{
		serch(l->rchild,b,t);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	int i,b;
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);	
	 } 
	 scanf("%d",&b);
	 node *l=creat(a,n);
	 int t=0;
	 serch(l,b,t);
	 if(f==1)
	 printf("%d",t);
	 else
	 printf("-1");
}
