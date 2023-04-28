#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data[100];
	int len;
}node;
void creat(node *&l)
{
	l=(node*)malloc(sizeof(node));
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&l->data[i]);
	}
	l->len=n;
}
int main()
{
	node *l;
	creat(l);
	int a,k=0;
	int i,j;
	scanf("%d",&a);
	for(i=0;i<l->len;i++)
	{
	if(l->data[i]==a)
	{
		for(j=i;j<l->len;j++)
		{
			l->data[j]=l->data[j+1];
		}
		l->len--;
		i=i-1;
	}
	}
	if(l->len>0)
	{	
	for(i=0;i<l->len;i++)
	{
		printf("%d ",l->data[i]);
	}
}
else
printf("-1");
}
