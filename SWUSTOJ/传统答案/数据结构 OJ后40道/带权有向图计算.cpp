#include<stdio.h>
int main()
{
	int n,i,j;
	int a[100][100];
	scanf("%d",&n);
	int max=0;
	int min=99;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]>max)
			max=a[i][j];
			if(a[i][j]<min&&a[i][j]>0)
			min=a[i][j];
		}
	}	
	printf("%d\n",max);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==max)
			{
			
				printf("<%d %d>",i,j);
			}
		}
	}
	printf("\n");
		printf("%d\n",min);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==min)
			{
			
				printf("<%d %d>",i,j);
			}
		}
	}
 } 
