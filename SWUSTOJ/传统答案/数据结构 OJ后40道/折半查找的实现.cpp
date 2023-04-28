#include<stdio.h>
int sum=0;
int chazhao(int a[],int b,int n)
{
	int max=n-1,min=0,mid;
	while(max>=min)
	{
		mid=(max+min)/2;
		if(b==a[mid])
		{
			sum++;
			return mid;
		}
		else if(b>a[mid])
		{
			min=mid+1;
		}
		else if(b<a[mid])
		{
			max=mid-1;
		}
		sum++;
	}
	return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b;
	scanf("%d",&b);
	int k=chazhao(a,b,n);
	printf("%d\n",k);
	printf("%d",sum);
}
