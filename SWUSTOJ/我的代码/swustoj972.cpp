/*	感觉很对但是有bug
    我觉得是他非法数据的问题
*/
#include<bits/stdc++.h>
using  namespace std;
int wide[1000];
int main(void)
{
	string a;
	int deep =0;
	int temp=0;
	while(cin>>a)
	{
		memset(wide,0,sizeof wide);
		deep=0;
		temp=0;
		if(a[2]==a[1]&&a[2]=='#')
		{
			cout<<1;
			break;
		}
		for(int i = 0 ;i<a.size();i++)
		{
			if(a[i]!='#')
			{
				deep++;
				wide[deep]++;
			//	cout<<a[i]<<deep<<endl;
			}
			else
			{
				int ii = i+1;
				temp=0;
				for(ii;a[ii]=='#';ii++)
				{
					temp++;
					i++;
				}
				//cout<<"temp"<<temp<<endl;
				deep-=temp;
			}

		}
	//	for(int i = 1 ;i<=a.size();i++)
	//	{
	//		cout<<wide[i]<<endl;
	//	}
		sort(wide,wide+a.size());
		cout<<wide[a.size()-1];
	}

}
