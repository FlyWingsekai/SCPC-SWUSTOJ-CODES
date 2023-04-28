#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char a[100];
	int lenth;
}sq;

void Add(sq *&list) 
{
	int x;
	char y;
	scanf("%d",&x);
	list = (sq *)malloc(sizeof(sq));
	list->lenth = x;
	for(int i = 0;i < x;i++)
	{
		scanf(" %c",&y);
		list->a[i] = y; 
	}
}

int main()
{
	sq *list_1,*list_2;
	Add(list_1);
	list_2 = (sq *)malloc(sizeof(sq));
	list_2->lenth = list_1->lenth;
	for(int i = 0;i<list_1->lenth;i++)
	{
		int n;
		n=list_1->lenth-1-i;
		list_2->a[i] = list_1->a[n];
	}
	
	
	for(int i = 0;i < list_1->lenth;i++)
	{
		printf("%c ",list_2->a[i]);
	}
}
