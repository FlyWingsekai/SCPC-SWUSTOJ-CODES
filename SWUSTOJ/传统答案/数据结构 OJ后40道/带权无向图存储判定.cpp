#include<stdio.h>
int main()
{
	int n,i,j,t=1;
	scanf("%d",&n);
	int a[100][100];
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
			if(a[i][j]!=a[j][i])
			{
				t=0;
				break;
			}
			
		}
	}
	if(t==0)
	printf("no");
	else
	printf("yes");
}
