#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long temp;
long long dp(long long n,long long k)
{
	if(n%2!=k%2)
	{
		return 0;
	}
	if(n/2>k/2&&n%2==1)
	{
		temp++;
		dp(n/2-k/2,k);
		dp(n/2+k/2+1,k);
	}
	else
		if(n/2>k/2&&n%2==0)
		{
			temp++;
			dp(n/2-k/2,k);
			dp(n/2+k/2,k);
		}
	return temp;
	
}
int main(void)
{
	cin>>n>>k;
	long long ans=dp(n,k);
	cout<<ans+1;
}
