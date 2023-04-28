/*
8 9
4 2
4 3
3 1
2 1
1 5
5 6
5 7
7 8
6 8
*/
/*
6 5
1 2
4 2
2 3
3 5
3 6
*/

#include<bits/stdc++.h>
using namespace std;
bool mapp[100][100];
int n,m;
int temp=1;
int a,b;
int ans;
void search(int aa)
{
	for(int i = 1; i<=n;i++)
	{
		if(mapp[aa][i]==1)
		{
			for(int j = 1;j<=n;j++)
			{
				if(mapp[i][j]==1)
				{
					mapp[aa][j]==1;
					mapp[j][aa]==1;
					search(j);
				}
			}
		}
	}
}
int main(void)
{
	cin>>n>>m;
	for(int i = 1 ;i<=m;i++)
	{
		cin>>a>>b;
		mapp[a][b]=1;
		mapp[b][a]=1;
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(mapp[i][j]==1)
			{
				for(int k=1;k<=n;k++)
				{
					if(mapp[j][k]==1)
					{
						mapp[i][k]=1;
						mapp[k][i]=1;
					}
				}
			}
		}
	}
	ans=0;
	for(int i = 1;i<=n;i++)
	{
		temp=0;
		for(int j= 1;j<=n;j++)
		{
			if(mapp[i][j]==1)
			temp++;
		}
		cout<<temp<<endl;
		if(temp==n)
		ans++;
	}
	cout<<ans<<endl;

}
