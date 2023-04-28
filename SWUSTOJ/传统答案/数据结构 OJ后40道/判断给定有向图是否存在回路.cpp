#include<stdio.h>
int n,t=0;
int a[100][100];
int flag[100];
void dis(int x)
{
	
	for(int i=0;i<n;i++)
	{
		if(flag[i]==0&&a[x][i]==1)
		{	
		flag[x]=1;
			dis(i);
		 } 
		 else if(a[x][i]==1)
		 t=1;
	}
}
int main()
{
	int e;
	scanf("%d%d",&n,&e);
	int i,j;
char str[100];
for(i=0;i<n;i++)
{
	scanf(" %c",&str[i]);
}
char m,k;
   for(j=0;j<e;j++)
   {
   	scanf(" %c",&m);
   	scanf(" %c",&k);
   	a[m-'A'][k-'A']=1;
   }
   dis(0);
   if(t==1)
   printf("yes");
   else
   printf("no");
 } 
