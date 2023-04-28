#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m,p,q,i,j,k;
string s;
int a[1000];

signed main(void)
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(a[1]>a[2])
	{
		p=a[1];
		a[1]=a[2];
		a[2]=p;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	return 0;
}

