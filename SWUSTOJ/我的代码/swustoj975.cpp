#include<bits/stdc++.h>
using namespace std;
string a;
int main(void)
{
	cin>>a;
	if(a[0]=='#')
	{
		cout<<0;
		return 0;
	}
	if(a[1]==a[2]&&a[1]=='#')
	{
		cout<<0;
		return 0;
	}
	int ans=0;
	for(int i = 0 ; i<a.size();i++)
	{
		if(a[i-1]==a[i-2]&&a[i-1]=='#'&&a[i]!='#')
			ans++;
	}
	cout<<ans;
	return 0;
	
}
