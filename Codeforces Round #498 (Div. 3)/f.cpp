#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
ll a[25][25];
ll n,m,k;
ll ans=0;
void dfs(ll x,ll y,ll cur)
{
	if(x==n&&y==m)
	{
		if(cur==k)ans++;
		return;
	}
	if(x<n)
	{
		dfs(x+1,y,cur^a[x+1][y]);
	}
	if(y<m)
	{
		dfs(x,y+1,cur^a[x][y+1]);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	dfs(1,1,a[1][1]);
	cout<<ans;
	return 0;
}

