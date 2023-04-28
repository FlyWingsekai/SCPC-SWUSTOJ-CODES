#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int h,u,d;
	while(cin >> h >> u >> d)
	{
		int time = 0;
		int high = 0;
		if(h == u && u == d && d == 0)
			return 0;
		else
		while(h > high )
		{
			high += u;
			time ++;
			if(high >= h)
			{
				cout << time << endl;
				break;
			}
			else
			high -= d;
			time ++;
				
		}
	}
}
