#include<stdio.h>
int main()
{
	int a[100][100];
	int b[100][100]={0};
	int n,e,i,j;
	scanf("%d",&n);
	scanf("%d",&e);
	for(i=0;i<e;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<e;i++)
	{
		b[a[i][0]][a[i][1]]=1;
	}
	int flag=0;
	for(i=0;i<n-1;i++)
	{
		if(b[i][i+1]!=1)
		{
			flag=1;
			break;
		}
	}
	if(flag==1||b[i][0]!=1)
	printf("no");
	else
	printf("yes"); 
}
