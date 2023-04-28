#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char a[10000005];
	cin>>s;
	strcpy(a,s.c_str());
	
	for(int i = 0; i <= sizeof(a) ;i ++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
			cout<<a[i]-32;
		else
			cout<<a[i]+32;
	}


return 0;
}
