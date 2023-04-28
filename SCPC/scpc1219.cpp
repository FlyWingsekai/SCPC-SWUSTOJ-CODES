#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <string>
#include <iomanip>
#include <map>
#include <sstream>
#include <ctype.h>
#include <stack>

using namespace std;
#define int long long
#define fr(i, a, n) for(int i = a; i <= n; i ++)
#define rf(i, a, n) for(int i = n; i >= a; i --)
int const N = 100005;
long long const mod = 1000000007;
typedef pair<int, int> PII;
int n, ans, t, m, sum, x1, yy1, x2, p, y2, x3, y3, a, x, y, flag, b, c, d;
long long h[N], e[N], ne[N], idx, q[N];
int r, k, l;
string s, str, ss, s1, s2;
map<string,int>mp;
stack<int> st;
deque<int> qq;

void solve()
{
	map<int, queue<int>> mp;
	cin >> n >> m;
	fr(i, 1, n)
	{
		cin >> a;
		fr(j, 1, a)
		{
			cin >> b;
			mp[i].push(b);
//			cout << mp[i].front() << 'x' << endl;
		}
	}
	a = 0, b = 0, sum = 0;
	fr(i, 1, n)
	{
//		cout << mp[i].size() << 'y' << endl;
		while(mp[i].size() != 0){
			if(a == 0)
			{
				a = mp[i].front();
				mp[i].pop();
			}
			if(mp[i].size() == 0) break;
			if(mp[i].front() <= a)
			{
				if(i == n) mp[i].pop();
				else
				{
					mp[i + 1].push(mp[i].front());
					mp[i].pop();
				}
			}else
			{
				sum ++;
//				cout << "xx" << endl;
				a = 0;
				mp[i].pop();
			}
		}
	}
	cout << sum;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
//	cin >> t;
//	while(t -- )
		solve();
	return 0;
}

