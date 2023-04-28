#include<stdio.h>
void sift(int a[],int i,int n)
{
	int j=i*2;
	int t=a[i];
	while(j<=n)
	{
		if(a[j]>a[j+1])
		j++;
		if(t>a[j])
		{
			a[i]=a[j];
			i=j;
			j=2*i;
		 } 
	 } 
	 a[i]=t;
}
int main()
{
	int n,i;
	int a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n/2;i>=1;i--)
	{
		sift(a,i,n);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
