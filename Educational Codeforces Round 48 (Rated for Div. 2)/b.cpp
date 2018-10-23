#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
bool a[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m,q;
	string s,t;
	//set<int>a;
	cin>>n>>m>>q>>s>>t;
	s=" "+s;
	t=" "+t;
	for(int i=0;i<=n-m;i++)
	{
		bool f=1;
		for(int j=1;j<=m;j++)
		{
			if(s[i+j]!=t[j])
			{
				f=0;break;
			}
		}
		if(f)a[i+1]=1;
	}
	while(q--)
	{
		int l,r,cnt=0;
		cin>>l>>r;
		if(r-l+1<m)
		{
			cout<<0<<"\n";
			continue;
		}
		for(int i=l;i<=r-m+1;i++)
		{
			if(a[i])cnt++;
		}
		cout<<cnt<<"\n";
	}
	return 0;
}

