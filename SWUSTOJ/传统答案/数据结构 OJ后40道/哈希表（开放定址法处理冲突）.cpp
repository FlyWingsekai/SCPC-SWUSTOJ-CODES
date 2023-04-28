#include<stdio.h>
#include<string.h>
int main()
{
	int a[100];
	memset(a,-1,sizeof(a));
	int n,m,t;
	scanf("%d",&n);
	scanf("%d",&m);
	while(m--)
	{
		int num;
		scanf("%d",&num);
		t=num%n;
		while(a[t]!=-1)
		{
			t=(t+1)%n;
		}
		a[t]=num;
	}
	int x,f=1,num=0;
	scanf("%d",&x);
	t=x%n;
	while(1)
	{
		num++;
		if(a[t]==x)
		break;
		if(a[t]==-1)
		{
			f=0;
			break;
		}
		t=(t+1)%n;
	}
	if(f==0)
	printf("-1");
	else
	{
		printf("%d,%d",t,num);
	}
}
