#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *left;
	struct node *right;
}node;
node* creat()
{
	char ch;
	node *l;
	scanf("%c",&ch);
	if(ch=='#')
	l=NULL;
	else
	{
		l=(node*)malloc(sizeof(node));
		l->data=ch;
		l->left=creat();
		l->right=creat();
	}
	return l;
}
node *data[100];
int tou=0,wei=0;
void print(node *l)
{
	if(l==NULL)
	return ;
	data[wei]=l;
	wei++;
	while(tou!=wei)
	{
		printf("%c",data[tou]->data);
		if(data[tou]->left!=NULL)
		{
			data[wei]=data[tou]->left;
			wei++;
		}
		if(data[tou]->right!=NULL)
		{
			data[wei]=data[tou]->right;
			wei++;
		}
		tou++;
	}
}
int main()
{
	node *l;
	l=creat();
	print(l);
}
