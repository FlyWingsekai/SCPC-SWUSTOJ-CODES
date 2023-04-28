#include<stdio.h>
int n,a[100][100];
int flag[100],zh[100];
void dis(int x,int y,int t)
{
   flag[x]=1;
   zh[t]=x;
   if(x==y)
   {
   	for(int i=0;i<=t;i++)
   	{
   		printf("%d",zh[i]);
	}
	   printf("\n");
   }
   for(int i=0;i<n;i++)
   {
   	if(flag[i]==0&&a[x][i]!=0)
   	{
   		dis(i,y,t+1);
	   }
   }
   flag[x]=0;
}
int main()
{
	scanf("%d",&n);	
	int i,j;
		int begin,end;
		scanf("%d%d",&begin,&end);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	dis(begin,end,0);
}
