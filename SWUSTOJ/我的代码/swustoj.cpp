#include<bits/stdc++.h>
using  namespace std;
int main(void)
{
	string a;
	int ans = 0;
	int deep =0;
    cin>>a;
	deep=0;
	ans=0;
	for(int i = 0 ;i<=a.size();i++)
	{
		if(a[0]=='#')
		{
			ans=0;
			break;
		}
		if(a[1]==a[2]&&a[1]=='#')
		{
			ans = 1;
			break;
}
		if(a[i]!=a[i+1]&&a[i+1]=='#')
		{
			ans++;

}
	}
	cout<<ans;

	return 0;
}
