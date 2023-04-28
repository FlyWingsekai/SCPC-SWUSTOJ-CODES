#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main(void)
{
	char c;
	int temp = 0;
	while(cin>>c)
	{
		if(c=='#')
		break;
		if(c<='9'&&c>='0')
		{
 			  temp++;
			a[temp]=c-'0';
		}
		else
		{
			if(c=='+')
   		{

				int ge=a[temp-1]+a[temp];
				temp--;
				a[temp]=ge;
			//	cout<<"+"<<ge<<endl;

			}
			if(c=='-')
			{
				
				int ge=a[temp-1]-a[temp];
				temp--;
				a[temp]=ge;
			//	cout<<"-"<<ge<<endl;
			}
			if(c=='*')
			{
				int ge=a[temp-1]*a[temp];
				temp--;
				a[temp]=ge;
		//		cout<<"*"<<ge<<endl;

			}
			if(c=='/')
			{
				int ge=a[temp-1]/a[temp];
				temp--;
				a[temp]=ge;
	//			cout<<"/"<<ge<<endl;
			}
		}
	}
	
	cout<<a[1];
	
	return 0;
}
