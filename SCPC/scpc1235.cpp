#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m,p,q,i,j,k;
string s;
int a[100005];
signed main(void)
{
    cin>>n;
    a[1]=1;
    a[2]=1;
    a[3]=3;
    for(int i=4;i<=n;i++)
    {
    	a[i]=a[i-1]+a[i-2]/2+a[i-3]/2;
    	a[i]=a[i]%1000000007;
	}
	cout<<a[n];
	return 0;
}
// 111 21 12 3
