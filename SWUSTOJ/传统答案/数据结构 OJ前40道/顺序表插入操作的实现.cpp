#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int a[100];
	int lenth;
}sq;

void Add(sq *&list)
{
	int x,y;
	scanf("%d",&x);
	list = (sq *)malloc(sizeof(sq));
	list->lenth = x;                //x为表长 
	for(int i = 0;i < x;i++)
	{
		scanf("%d",&y);
		list->a[i] = y; 
	}
}

int main()
{
	sq *list_1;
	Add(list_1);
	int z,m,i;

	scanf("%d",&m);                //指定的元素 
		scanf("%d",&z);             //要插入的元素 
	for(i = 0;i < list_1->lenth;i++)
	{
		if(list_1->a[i] == m)
		{
			for(int j = list_1->lenth;j >= i;j--)
			{
				list_1->a[j] = list_1->a[j-1];
			}
		list_1->a[i] = z;
		list_1->lenth++;
		break;
		}
	}
	if(i==list_1->lenth)
	{
		
		list_1->a[list_1->lenth] = z;
		list_1->lenth++;
	}
	
	for(int i = 0;i < list_1->lenth;i++)
	{
		printf("%d ",list_1->a[i]);
	}
}
