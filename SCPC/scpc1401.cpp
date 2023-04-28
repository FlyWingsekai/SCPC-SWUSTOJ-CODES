#include<bits/stdc++.h>
using namespace std;

	long long  a[1000005],b[1000005];
int main(void)
{
	int n,m,l,r;
	long long ans;
	
	cin >> n >> m;
	for(int i = 1; i <= m;i ++)
	{
		cin >> l >> r;
		a[l] ++;
		a[r + 1] --;
	}
	for(int i = 1 ;i <= n ; i++)
	{
		b[i] = b[i - 1] + a[i];
	}
	sort(b+1,b+1+n);
	ans = m - b[1];
	int j=2;
	while(b[j] == b[j-1])
	{
		j ++;
	}
	cout << ans <<" "<<j - 1;
	
	return 0;
}
