#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	char data[100];
	int top;
}node;
void init(node*&l)
{
	l->top=-1;
}
void push(node *&l,char e)
{
	l->top++;
	l->data[l->top]=e;
}
void pop(node *&l,char &e)
{
	e=l->data[l->top];
		l->top--;
}
int main()
{
	char a[100];
	char e;
	int i=0,t=0;
	node *l;
	l=(node*)malloc(sizeof(node));
	init(l);
	scanf("%s",a);
	getchar();
	int n=strlen(a);
while(a[i]!='@')
{
	push(l,a[i]);
	i++;
}
for(i=1+i;i<n-1;i++)
{
	pop(l,e);
	if(a[i]!=e)
	{
	printf("no!");
	t=1; 
	break;
	}
}
if(t!=1)
printf("yes!");
}
