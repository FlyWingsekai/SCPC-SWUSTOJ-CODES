#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int a[100];
	int lenth;
}ls;
void Add(ls *&list)
{
	int n,m;
	scanf("%d",&n);
	list = (ls *)malloc(sizeof(ls));
	list->lenth=n;
	for(int i = 0; i <n; i++)
	{
		scanf("%d",&m);
		list->a[i] = m;
	}
}

int main()
{
	ls *list_1,*list_2,*list_3;
	Add(list_1);
	Add(list_2);
	list_3 = (ls *)malloc(sizeof(ls));
	int i = 0,j = 0,k = 0;
	while(i < list_1->lenth||j < list_2->lenth)
	{
		if(i == list_1->lenth)
		{
			list_3->a[k++] = list_2->a[j++];
		}
		else if(j == list_2->lenth)
		{
			list_3->a[k++] = list_1->a[i++];
		}
		else if(list_1->a[i] > list_2->a[j])
		{
			list_3->a[k++] = list_2->a[j++];
		}
		else
		list_3->a[k++] = list_1->a[i++];
	}
	list_3->lenth = list_1->lenth + list_2->lenth;
	for(int i = 0;i < list_3->lenth;i++)
	{
		printf("%d ",list_3->a[i]);
	}
}
