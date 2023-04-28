#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data[100];
	int top;	
}node;
void creat(node *&l)
{
	l=(node*)malloc(sizeof(node));
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
	char a[100],e;
	node *l;
	int f=1;
	creat(l);
	scanf("%s",a);
	getchar();
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]=='['||a[i]=='(')
		{
			push(l,a[i]);
		}
		else if(a[i]==']')
		{
			pop(l,e);
			if(e!='[')
			{
				printf("NO");
				f=0;
				break; 
			}
		}
		else if(a[i]==')')
		{
			pop(l,e);
			if(e!='(')
			{
				printf("NO");
				f=0;
				break; 
			}
		}
		i++;
	}
	if(l->top!=-1)
	f=0;
	if(f)
	printf("YES");
}
