#include<stdio.h>
int main()
{
	int n;
  int a[100][100];
  scanf("%d",&n);
  int i,j;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		scanf("%d",&a[i][j]);
	  }
  }
  int sum;
  for(i=0;i<n;i++)
  {sum=0;
  	for(j=0;j<n;j++)
  	{
  	 
  		if(a[i][j]>0)
  		sum++;
	  }
	  printf("%d\n",sum);
  }
}
