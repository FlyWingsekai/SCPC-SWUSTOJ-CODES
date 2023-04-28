#include<stdio.h>
#include<stdlib.h>
#define max 0xfffffff;
typedef struct node
{
	int weight;
	int f;
	int another;
}node;
node dian[100];
int n;
int ok[100];
int map[100][100];
char str[100];
int change(char x)
{
	for(int i=0;i<n;i++)
	{
		if(str[i]==x)
		return i;
	}
}
void find(int j)
{
	for(int i=0;i<n;i++)
	{
		if(dian[i].f==1)
		continue;
		if(dian[i].weight>map[i][j])
		{
			dian[i].weight=map[i][j];
			dian[i].another=j;
		}
	}
}
int main()
{
	int e,i,j;
	scanf("%d%d",&n,&e);
	scanf(" %s",str);
	for(i=0;i<n;i++)
	{
		dian[i].f=0;
		dian[i].weight=max;
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	map[i][j]=max;
	while(e--)
	{
		int w;
		char a,b;
		scanf(" %c %c",&a,&b);
		scanf("%d",&w);
		map[change(a)][change(b)]=w;
		map[change(b)][change(a)]=w;
	}
	ok[0]=0;
	dian[0].f=1;
	int top=0;
	while(top<n)
	{
		find(ok[top]);
		int min=max;
		int p;
		for(i=0;i<n;i++)
		{
			if(dian[i].f==1)continue;
			if(dian[i].weight<min)
			{
				min=dian[i].weight;
				p=i;
			}
		}
		if(top<n-1)
		printf("(%c,%c)",str[dian[p].another],str[p]);
		top++;
		ok[top]=p;
		dian[ok[top]].f=1;
	}
}
