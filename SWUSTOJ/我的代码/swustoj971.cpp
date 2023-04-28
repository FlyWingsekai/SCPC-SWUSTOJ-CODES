#include<bits/stdc++.h>
using  namespace std;
int main(void)
{
	string a;
	int ans = 0;
	int deep =0;
	int temp=0;
	while(cin>>a)
	{
		deep=0;
		ans=0;
		for(int i = 0 ;i<=a.size();i++)
		{
			if(a[i]!='#')
			{
				deep++;
				if(deep>ans)
					ans=deep;
			}
			else
			{
				int ii = i+1;
				while(a[ii-1]=='#'&&a[ii]=='#')
				{
					temp++;
					ii++;
				}
			}
			deep-=temp;
			temp=0;
		}
	cout<<ans;
	}

}
