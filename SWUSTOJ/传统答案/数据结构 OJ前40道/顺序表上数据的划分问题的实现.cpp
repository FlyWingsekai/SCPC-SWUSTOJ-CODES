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
    l=(node*)malloc(sizeof(node));
	for(i=0;i<n;i++)
	{
		scanf("%d",&l->data[i]);
	}
	l->len=n;
}
int main()
{
	int n,i,max,min;
	scanf("%d",&n);	
	node *l;
	creat(l,n);
    int f=0;
    for(i=1;i<n;i++)
    {
     	if(l->data[i]<l->data[0])
     	f++;
	}
	 max=min=f;
	 int a[100];
	 for(i=0;i<n;i++)
	 {
	 a[i]=l->data[i];
	 }
	 for(i=1;i<n;i++)
	 {
	 	if(a[i]<=a[0])
	 	{
	 		min--;
	 		l->data[min]=a[i];
		 }
		 else
		 {
		 	max++;
		 	l->data[max]=a[i];
		 }
	 }
	 l->data[f]=a[0];
	     for(i=0;i<n;i++)
	 	{
	 		printf("%d ",l->data[i]);
		 }
}
