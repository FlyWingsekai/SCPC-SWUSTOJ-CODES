#include<stdio.h>
int a[100][100];
int flag[100],n;
char str[100];
void dis(int x)
{
	printf("%c",str[x]);
	flag[x]=1;
	for(int i=0;i<n;i++)
	{
		if(a[x][i]!=0&&flag[i]!=1)
		{
			dis(i);
		}
	}
}
int main()
{
	int i,j;
	scanf("%d",&n);
	scanf(" %s",str);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	char ch;
	scanf(" %c",&ch);
	for(i=0;i<n;i++)
	{
		if(str[i]==ch)
		{
			dis(i);
		}
			}
}
