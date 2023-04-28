#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100005],b[100005],c[100005];
long long  minn=1000000;
long long ans=0;
int main(void)
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	b[n]=a[n];
	for(int i=n-1;i>=1;i--)
	{
		b[i]=a[i]+b[i+1];
	}
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i]<<" "<<b[i]<<endl;
//	}
	for(int i=n;i>=1;i--)
	{
		minn=min(b[i]/(n-i+1),minn);
	}
//	cout<<"minn="<<minn<<endl;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>minn)
		{
			ans+=(a[i]-minn)*i;
		}
		if(a[i]<minn)
		{
			ans-=(minn-a[i])*i;
		}
//		cout<<i<<"  "<<ans<<endl;
	}
    cout<<ans;


}
