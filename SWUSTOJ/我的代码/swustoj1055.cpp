#include<bits/stdc++.h>
using namespace std;
bool a[10000][10000];
int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==1)
			cout<<j;
		}
		cout<<endl;
	}
	
	return 0;
}
