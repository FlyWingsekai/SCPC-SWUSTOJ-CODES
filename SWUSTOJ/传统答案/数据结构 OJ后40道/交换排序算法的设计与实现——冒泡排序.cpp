#include<stdio.h>
int main()
{
	int n,i,j;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			int t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
 } 
