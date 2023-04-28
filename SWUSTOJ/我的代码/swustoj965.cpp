#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int n ,k;
	string a;
	int num;
	cin>>n>>k;
	int queue[10086];
	for(int i = 0 ;i<10086;i++)
		queue[i]=-1;
	int flag = 0;
	for(int i = 1; i<=k;i++)
	{
		cin>>a;
		if(a[0]='i')
		{
			cin>>num;
			queue[flag%(n-1)]=num;
			flag++;
		}
		else
		{
			int j=0;
			while(queue[j]==-1)
				j++;
			queue[j]=-1;
			flag--;
		}

	}

	for(int i = 0;i<=n-1;i++)
	{
		if(queue[i]!=-1)
		cout<<queue[i]<<"  ";
	}
	return 0;
}
