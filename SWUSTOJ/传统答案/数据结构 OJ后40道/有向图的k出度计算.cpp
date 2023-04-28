#include<stdio.h>

int main()
{
	int i,j,n,e,k,t=0;
	int a[100][100];
	scanf("%d",&n);
	scanf("%d",&k);
	int num[100]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]>0)
			num[i]++;
		}
		if(num[i]==k)
		t++;
	 } 
	 printf("%d\n",t);
for(i=0;i<n;i++)
{
	if(num[i]==k)
	{
		printf("%d",i);
	}
}
	
 } 
