#include<bits/stdc++.h>
using namespace std;
int n;
long long jc(int m)
{
    if(m == 0 || m == 1)
    {
        m = 1;
    }
    else
    {
     m = m * jc ( m - 1 );
    }

}
int main(void)
{

	cin >> n;
	long long ans = jc(n);
	cout << ans;
	return 0;
	
}
