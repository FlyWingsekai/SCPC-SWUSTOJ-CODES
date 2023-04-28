#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data[100];
	int len;
 } node;
 void creat(node *&l,int n)
 {
 	l=(node*)malloc(sizeof(node));
 	for(int i=0;i<n;i++)
 	{
 		scanf("%d",&l->data[i]);
	 }
 }
 int main()
 {
 	int n,i,j,f=0;
	 scanf("%d",&n);
	 node *l;
	 creat(l,n);
	 for(i=0;i<n;i++)
	 {   int t=0;
	 	for(j=0;j<n;j++)
	 	{
	 		if(l->data[i]==l->data[j])
	 		{
	 			t++;
			 }
		 }
		 if(t>=n/2)
		 {
		 	printf("%d",l->data[i]);
		 	f=1;
		 	break;
		 }
	 }
	 if(f==0)
	 printf("-1");
	  }
