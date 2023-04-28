#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N=3e5+10;
int a[N],f[N];
typedef pair<int,int>PII;
queue<PII>q;
bool st[N];
int n,res;
void bfs(int u,int cnt)
{
	q.push({u,cnt});
	st[u]=1;
	int l=0,r=0;
	while(!q.empty())
	{
		r=0;
		while(q.size())
		{
			auto x=q.front();
			if(a[x.first]+x.first>=n)
			{
				res=x.second;
				return;
			}
			if(q.size()==1)l=x.first;
			r=max(r,a[x.first]+x.first);
			q.pop();
		}
		cnt++;
		for(int i=l+1;i<=r;i++)q.push({i,cnt});
	}

}
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
	bfs(1,1);
	cout<<res<<endl;
}
signed main()
{
	int t=1;
//	cin>>t;
	while(t--)solve();
	return 0;
}

