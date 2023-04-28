#include<stdio.h>
int main()
{
	int n,i,j;
	int a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
			printf("%d",j);
		}
		printf("\n");
	}
 } 
