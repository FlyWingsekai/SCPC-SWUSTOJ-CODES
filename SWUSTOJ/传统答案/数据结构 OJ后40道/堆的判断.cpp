#include<stdio.h>
int main()
{
	int n,i,flag=1;;
	int a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n/2;i++)
	{
		if(a[i]>a[i*2])
		{
			flag=0;
			break;
		}
		if(a[i]>a[i*2+1]&&2*i+1<=n)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	printf("No");
	else
	printf("Yes");
}
