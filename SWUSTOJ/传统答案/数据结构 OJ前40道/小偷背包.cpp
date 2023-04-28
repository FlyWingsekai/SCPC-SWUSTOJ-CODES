#include<stdio.h>
#include<stdlib.h>
int bag[100];
int dongtaiguihua(int s,int n)
{
	if(s==0)
	return 1;
	else if(s<0||n==0)
	return 0;
	else if(dongtaiguihua(s-bag[n],n-1))
	return 1;
	else  if(dongtaiguihua(s,n-1))
	return 1;
 } 
int main()
{
	int n,s,i;
	scanf("%d",&s);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&bag[i]);
	}
	if(dongtaiguihua(s,n))
	printf("yes!");
	else
	printf("no!");
	
}
