#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
}node;
node *creat(char *hou,char *zhong,int n)
{
	node *l;
	char *p;
	int k;
	if(n<=0)
	return NULL;
	l=(node*)malloc(sizeof(node));
	l->data=*(hou+n-1);
	for(p=zhong;p<zhong+n;p++)
	{
		if(*p==*(hou+n-1))
		break;
	}
	k=p-zhong;
	l->lchild=creat(hou,zhong,k);
	l->rchild=creat(hou+k,p+1,n-k-1);
	return l;
}
void print(node*l)
{
	if(l!=NULL)
	{
		printf("%c",l->data);
		print(l->lchild);
		print(l->rchild);
	}
}
int main()
{
	char zhong[100];
	char hou[100];
	scanf("%s",zhong);
	scanf("%s",hou);
	int n=strlen(hou);
	node *l=creat(hou,zhong,n);
	print(l);
 } 
