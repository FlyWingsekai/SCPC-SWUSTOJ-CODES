#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m,p,q,i,j,k;
string s;
int a[1000][1000];
signed main(void)
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]<='9'&&s[i]>='0')
			{
				a[i][s[i]-'0']=1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
}

	return 0;
}

