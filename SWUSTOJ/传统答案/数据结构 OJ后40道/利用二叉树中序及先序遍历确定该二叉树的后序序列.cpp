#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
}node;
node *creat(char *xian,char *zhong,int n)
{
	char  *p;
	int k;
	node *l;
	l=(node*)malloc(sizeof(node));
	if(n<=0)
	return NULL;
	l->data=*(xian);
	for(p=zhong;p<zhong+n;p++)
	{
		if(*p==*(xian))
		break;
	}
	k=p-zhong;
	l->lchild=creat(xian+1,zhong,k);
	l->rchild=creat(xian+k+1,p+1,n-k-1);
	return l;
}
void print(node *l)
{
	if(l!=NULL)
	{
		print(l->lchild);
		print(l->rchild); 
		printf("%c",l->data);
	}
}
int main()
{
char zhong[100];
char xian[100];
scanf("%s",zhong);
scanf("%s",xian);
int n=strlen(xian);
node *l;l=creat(xian,zhong,n);
	print(l);
}
