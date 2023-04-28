#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m,p,q,i,j,k;
string s;
int a[1000];
signed main(void)
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>p;
		a[p]++;
		cin>>p;
	}
	for(int i=0;i<m;i++)
	cout<<a[i]<<endl;

	return 0;
}

