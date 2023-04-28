#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
 }node;
void CL(node *&l,int n)                 //创建链表 
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

bool LI(node * &l,int i,int e)             //第i个结点,插入元素e 
{
	int j = 0;
	node *p = l,*s;
	if(i<=0)
	return false;
	while(j<i-1&&p!=NULL)
	{
		j++;
		p = p->next;
	}
	if(p==NULL)
	return false;
	else
	{
		s = (node *)malloc(sizeof(node));
		s->data=e;
		s->next=p->next;
		p->next=s;
		return true;
	}
}
int main()
{
	int i,n,e;
	node *head,*q;
	scanf("%d",&n);                    //输入表长 
	CL(head,n);
	scanf("%d",&i);               //输入第i个结点 
	scanf("%d",&e);                   //输入e 
	if(LI(head,i,e))
	{
		q=head->next;
		for(int x = 0;x<n+1;x++)
		{
			printf("%d ",q->data);
			q=q->next;
		}
	}
	else
	printf("error!");
	return 0; 
}
