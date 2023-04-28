#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data[100];
	int len;
}node;
void creat(node*&l)
{
	int n;
	l=(node*)malloc(sizeof(node));
		scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&l->data[i]);
	}
	l->len=n;
}
int main()
{
	node *l1,*l2,*l3;
	creat(l1);
	creat(l2);
	int k=0;
	l3=(node*)malloc(sizeof(node)); 
	for(int i=0;i<l1->len;i++)
	{
		for(int j=0;j<l2->len;j++)
		{
			if(l1->data[i]==l2->data[j])
			{
				l3->data[k++]=l1->data[i];
				break;
			}
		 } 
	}
	for(int i=0;i<k;i++)
	{
		printf("%d ",l3->data[i]);
	}
}
