#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005];
int main(void)
{
	a[0]=-10086;
	int m,n;
	cin>>m>>n;
	long long ans=0;
	for(int i = 1 ;i<=m;i++)
	{
		cin>>a[i];
	}
	for(int i = 1; i<=n;i++)
	{
		cin>>b[i];
	}
	sort(a+1,a+1+m);
	sort(b+1,b+1+n);
	for(int i = 1 ;i<=n;i++)
	{
		int j = 1;
		while(a[j]<b[i]&&j<m)
		{
			j*=2;
			if(j>m)
			j=m;
		}
		while(a[j]>=b[i]&&j>1)
		{
			j--;
		}
		ans+=min(abs(a[j]-b[i]),abs(a[j+1]-b[i]));
		cout<<ans<<"   e"<<endl;
	}
	
	cout<<ans;
	return 0;
}
