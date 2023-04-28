#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int a[100005];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int flag = 1;
	for(int i = 1; i<=n;i++)
	{
		if(a[i]==a[i+1])
		{
			flag++;
		}
		else
			if(a[i]!=a[i-1])
			{
				flag=1;
			}
		if(flag>n/2)
		{
			cout<<a[i];
		//	break;
			return 0;
		}
	}
//	cout<<flag;
	cout<<-1;
	
	return 0;
	
}
