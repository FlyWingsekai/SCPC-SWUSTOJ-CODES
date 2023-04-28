#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data[100];
	int len;
}node;
 void creat(node *&l,int n)
 {
 	int i;
 	for(i=0;i<n;i++)
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
 	l=(node*)malloc(sizeof(node));
 	creat(l,n);
 	int a,b;
 	scanf("%d%d",&a,&b);
 	for(int i=0;i<n;i++)
 	{
 		if(l->data[i]<=b&&l->data[i]>=a)
 		{
 			for(int j=i;j<n;j++)
 			{
 				l->data[j]=l->data[j+1];
		   }
		   i--;
		   n--;
		 }
	 }
	 for(int i=0;i<n;i++)
	 {
	 	printf("%d ",l->data[i]);
	 }
 }
