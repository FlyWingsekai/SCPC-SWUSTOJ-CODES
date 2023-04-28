#include<stdio.h>
int main()
{
	int n,i;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<a[0])
      {
      	int t=a[0];
      	a[0]=a[i];
      	a[i]=t;
      	break;
	  }
   } 
   for(i=0;i<n;i++)
   {
   	printf("%d ",a[i]);
   }
}
