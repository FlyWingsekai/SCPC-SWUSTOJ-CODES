#include<stdio.h>

int main()
{
	int i,j,n,x,y;
	int a[100][100];
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	 } 
if(a[x][y]==1)
printf("yes");
else
printf("no");
	
 } 
