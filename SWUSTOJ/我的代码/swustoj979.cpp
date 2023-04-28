#include<bits/stdc++.h>
using namespace std;
int l[10086],r[100086],idx=1;
char w[10086];
int creat(int n)
{
	cin>>w[n];
	if(w[n]=='#')
		return -1;
	l[n]=creat(idx++);
	r[n]=creat(idx++);

	return n;
}
void print(int n)
{

	if(l[n]!=-1)
		print(l[n]);
			cout<<w[n];
	if(r[n]!=-1)
		print(r[n]);

}
int main(void)
{
	creat(idx++);
	print(1);

	return 0;

}
