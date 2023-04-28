#include<stdio.h>
#include<string.h>
#include<malloc.h>
int n,t;
int flag[100];
	int a[100][100];
void dis(int x)
{
	flag[x]=1;
	for(int i=0;i<n;i++)
	{
		if(flag[i]==0&&a[x][i]!=0)
		{	
		    t++;
			dis(i);
		}
	}
}
int main()
{
	int i,j;
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
		t=0;
		memset(flag,0,sizeof(flag));
		dis(i);
		if(t==n-1)
		printf("%d",i);
	}
}
