#include<stdio.h>
int flag[100]={0};
int dui[100]={0},wei=0,tou=0;
int a[100][100];
int n;
char  str[100];
void dis(int x)
{
	dui[wei++]=x;
	printf("%c",str[x]);
	flag[x]=1;
	while(tou!=wei)
	{
			for(int i=0;i<n;i++)
	{
		if(a[dui[tou]][i]!=0&&flag[i]==0)
		{
			printf("%c",str[i]);
			flag[i]=1;
			dui[wei++]=i;
		}
	}
	tou++;
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
		dis(i);
	}
}
