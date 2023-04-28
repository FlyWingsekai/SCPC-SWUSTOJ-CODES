#include<bits/stdc++.h>
using namespace std;
int c(int n,int r)
{
	if(r == 0)
		return 1;
	else
		return c(n, r-1)*(n - r + 1) / r;
}
int main(void)
{
	int n,r;
	while(cin >> n >> r)
	{
		if(n == r && r == 0)
		{
			return 0;
		}
		else  if(r > n)
			cout << "error!" << endl;
		else
		cout << c(n,r) <<endl;
	}
}
