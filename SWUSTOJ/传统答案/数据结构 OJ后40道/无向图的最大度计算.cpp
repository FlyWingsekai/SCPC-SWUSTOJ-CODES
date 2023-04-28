#include<stdio.h>
int main()
{
	int n;
	int num[100]={0};
	scanf("%d",&n);
	int i,j;
	int a[100][100];
	int max=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]>0)
			{
				num[i]++;
			}
		}
		if(max<num[i])
		max=num[i];
	}
	printf("%d\n",max);
	for(i=0;i<n;i++)
	{
		if(max==num[i])
		printf("%d",i);
	}
}
