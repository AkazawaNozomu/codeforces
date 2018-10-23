#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+5;
//vector<int>p[maxn];
int f[maxn],vis[maxn];
void init(int n)//size
{
	for(int i=1;i<=n;i++)
	{
		f[i]=i;
	}
}
int find(int x)
{
	if(f[x]==x)return x;
	else return f[x]=find(f[x]);
}
void unite(int x,int y)
{
	x=find(x);
	y=find(y);
	if(x>y)f[x]=y;
	else f[y]=x;
}
bool quest(int x,int y)
{
	return find(x)==find(y);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m,q,r,c;
	cin>>n>>m>>q;
	init(m);
	memset(vis,0,sizeof(vis));
	for(int i=0;i<q;i++)
	{
		cin>>r>>c;
		//p[r].insert(c);
		if(vis[r])unite(c,vis[r]);
		else vis[r]=c;
	}
	ll ans=0;
	for(int i=1;i<=m;i++)
	{
		if(find(i)!=1)
		{
			ans++;
			unite(i,1);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])ans++;
	}
	cout<<ans<<endl;
	return 0;
}

