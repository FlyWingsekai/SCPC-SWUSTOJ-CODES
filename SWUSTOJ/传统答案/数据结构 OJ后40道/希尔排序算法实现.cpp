#include<stdio.h>
int main()
{
	int n,a[100];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int d=n/2;
for(i=0;i<d;i++)
{
	if(a[i]>a[i+d])
	{
		int t=a[i];
		a[i]=a[i+d];
		a[i+d]=t;
	}
	}	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
