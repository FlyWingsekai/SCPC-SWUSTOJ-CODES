#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int len;
	int data[100];
}node;
void creat(node *&l,int n)
{
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&l->data[i]);
	}
	l->len=n;
}
int main()
{
	int n;
	scanf("%d",&n);
	node *l;
	int i,j;
	int a[100];
	l=(node*)malloc(sizeof(node));
	creat(l,n);
	int c=0,k=1;
	scanf("%d",&c);
	if(c>n||c<1)
	printf("error!");
	else
	{
	for(i=1;i<=c;i++)
	{
		a[i]=l->data[i];
	}
	for(i=1;i<=l->len-c;i++)
	{
		l->data[i]=l->data[i+c];
	}
	for(i=l->len-c+1;i<=l->len;i++)
	{
		l->data[i]=a[i-(l->len-c)];
	}
	for(i=1;i<=l->len;i++)
	{
		printf("%d ",l->data[i]);
	}
}
}

