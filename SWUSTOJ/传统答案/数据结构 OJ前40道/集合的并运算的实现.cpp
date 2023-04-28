#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int len;
	int data[100];
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
	node *l1,*l2;
	creat(l1);
	creat(l2);
	int i,j;
	for(i=0;i<l2->len;i++)
	{
		for(j=0;j<l1->len;j++)
		{
			if(l2->data[i]==l1->data[j])
			break;
		}
		if(j==l1->len)
		{
			l1->data[j]=l2->data[i];
			l1->len++;
		}
	}
	for(i=0;i<l1->len;i++)
	{
		printf("%d ",l1->data[i]);
	}
}
