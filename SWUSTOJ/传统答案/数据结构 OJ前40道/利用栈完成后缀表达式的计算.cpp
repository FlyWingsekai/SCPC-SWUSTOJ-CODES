#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data[100];
	int top;
}node;
void creat(node *&l)
{
	l=(node*)malloc(sizeof(node));
	l->top=-1;
}
void push(node *&l,int e)
{
	l->top++;
	l->data[l->top]=e;
}
void pop(node *&l,int &e)
{
	e=l->data[l->top];
	l->top--;
}
void sum(char a[])
{
	node *l;
	creat(l);
	int i=0;
	int k,b;
	char c;
	c=a[i];
	while(c!='#')
	{
		if(c>='0'&&c<='9')
		{
			push(l,c-48);
		}
		else if(c!=' ')
		{
			switch(c)
			{
				case'+':pop(l,k);pop(l,b);push(l,b+k);break;
				case'-':pop(l,k);pop(l,b);push(l,b-k);break;
				case'*':pop(l,k);pop(l,b);push(l,b*k);break;
				case'/':pop(l,k);pop(l,b);push(l,b/k);break;
			}
		}
		i++;
		c=a[i]; 
	}pop(l,b);
	printf("%d",b);
}
int main()
{
char str[100];
int a;
scanf("%[^\n]",str);
sum(str);

}

