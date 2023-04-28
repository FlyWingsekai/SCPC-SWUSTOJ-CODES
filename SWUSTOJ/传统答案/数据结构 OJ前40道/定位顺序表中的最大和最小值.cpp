#include<stdio.h>
#include<stdlib.h>
typedef  struct node
{
	int len;
	int data[100];
}node;
void creat(node*&l)
{
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
	int max=0,min=0;
	int k=0,t=0;
	l=(node*)malloc(sizeof(node));
	creat(l);
	for(int i=0;i<l->len;i++)
{
	if(max<l->data[i])
	{
			max=l->data[i];
			k=i;
	}

	if(min>l->data[i])
	{
			min=l->data[i];
			t=i;
	}

}
printf("Lmax=%d\n",k);
printf("Lmin=%d",t);
}
  
