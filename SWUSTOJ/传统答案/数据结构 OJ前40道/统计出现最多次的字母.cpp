#include<stdio.h>
int main()
{
	int n,i,k=0,t,max;
	scanf("%d",&n);
	int a[26]={0};
	char b[100];
	scanf("%s",b);
	for(i=0;i<n;i++)
	{
	    k=b[i]-'a';
	    a[k]++;
	}
	max=a[0];
	for(i=0;i<26;i++)
	{
	 if(a[i]>max)
	{
		max=a[i];
		t=i;
	}		
	}
	printf("%c\n",t+'a');
}
