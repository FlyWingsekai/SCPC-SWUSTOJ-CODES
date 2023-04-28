#include<stdio.h>
int flag[100];
int a[100][100],n;
void chaxun(int y)
{
	for(int i=1;i<n;i++)
	{
		if(flag[i]==0&&a[y][i]==1)
		{
			flag[i]=1;
			chaxun(i);
		}
	}
 } 
int main()
{
	int i,j;
	int sum=0;
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
	 	if(flag[i]==0)
	 	{
	 		sum++;
	 		flag[i]=1;
	 		chaxun(i);
		 }
	 }
	 printf("%d",sum);
}
