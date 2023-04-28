#include<stdio.h>
int main()
{
	int n,e;
	scanf("%d%d",&n,&e);
	int i,j;
	int a[100][100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d\n",n-1);
	for(i=0;i<n;i++)
	{
		if(i!=e)
		printf("%d",i);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=e&&j!=e)
			printf("%d",a[i][j]);
		}
		if(i!=e)
		printf("\n");
	}
}
