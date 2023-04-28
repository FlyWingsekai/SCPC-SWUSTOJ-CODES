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
void get(node *&l,char &e)
{
	e=l->data[l->top];
}
int main()
{
	char a[100],b[100],c;
	node *l;
	creat(l);
	int i=0,k=0;
	scanf("%s",a);
	getchar();
	while(a[i]!='\0')
	{
		switch(a[i])
		{
			case'(':
				push(l,a[i]);
				i++;
				break;
				case')':
					pop(l,c);
					while(c!='(')
					{
						b[k++]=c;
						pop(l,c);
					}
					i++;
					break;
					case'+':
					case'-':
						while(l->top!=-1)
						{
							get(l,c);
							if(c!='(')
							{
								b[k++]=c;
								pop(l,c);
							}
							else
							break;
						}
					push(l,a[i]);
					i++;
					break;
					case'*':
						case'/':
							while(l->top!=-1)
							{
								get(l,c);
								if(c=='/'||c=='*')
								{
									b[k++]=c;
									pop(l,c);
								}
								else
								break;
							}
							push(l,a[i]);
							i++;
							default:
								b[k++]=a[i];
								i++;
		}
	}
	while(l->top!=-1)
	{
		pop(l,c);
		b[k++]=c;
	}
	b[k]='\0';
	printf("%s",b);
}
