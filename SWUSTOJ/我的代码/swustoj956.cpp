#include<stdio.h>
int main(void)
{
	int n,m,i,s=0;
	scanf("%d%d", &n, &m);
	for(int i = 2; i<=n;i++)
	{
		s=(s+m)%i;
	}
	printf("%d",s+1);
}
