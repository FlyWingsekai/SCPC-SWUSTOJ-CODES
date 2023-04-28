#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
 }node;
 
void CL(node *&l,int n)                 //´´½¨Á´±í 
{
	node *p_1,*p_2;
	int i;
	l = (node *)malloc(sizeof(node));
	p_1 = l;
	for(i = 0;i < n;i++)
	{
		p_2 = (node *)malloc(sizeof(node));
		scanf("%d",&p_2->data);
		p_1->next = p_2;
		p_1 = p_2;
	}
	p_1->next = NULL;
}
int main()
{
	int i,n,a;
	node *head,*q,*p_1,*r;
	scanf("%d",&n);
	CL(head,n);
	p_1 = head;
	scanf("%d",&a);
	if(a>n||a<2)
	printf("error!");
	else
	{
		for(i = 1;i<=n;i++)
		{
			if(i==a)
			{
				break;
			}
			r = p_1;
			p_1 = p_1->next;
		}
		r->next = p_1->next;
		for(i = 0;i<n-1;i++)
		{
			if(i==0)
			{
				printf("%d",head->next->data);
			} 
			else
			{
				printf(" %d",head->next->data);
			 	
			}
			head = head->next;
		}
		printf("\n");
	}
}
