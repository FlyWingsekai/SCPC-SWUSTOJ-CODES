#include<bits/stdc++.h>
using namespace std;
	string s;
	int a[100000];
int main(void)
{

	cin>>s;
	if(s[2]==s[1]&&s[1]=='#')
	{
		cout<<s[0];
		return 0;
	}
	for(int i = 1 ; i<=s.size();i++)
	{
		int len=0;
		if(s[i]=='#')
		{
			int ii =i;
			while(a[ii]==a[i])
			{
				len++;
			}
			for(int j=0;j<len;j++)
			{
				cout<<s[i-j];
				a[i-j]=1;
			}
}
	}
	for(int i = s.size();i>=0;i--)
	{
		if(a[i]!=1&&s[i]!='#')
		cout<<s[i];
	}
	
	return 0;
}
