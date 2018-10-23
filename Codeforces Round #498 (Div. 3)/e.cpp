#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+5;
int a[maxn],nok[maxn],sna[maxn];
bool vis[maxn];
vector<int>kid[maxn];
vector<int>ans;
void dfs(int n)
{
	for(int i=0;i<kid[n].size();i++)
	{
		if(vis[kid[n][i]]==0)
		{
			vis[kid[n][i]]=1;
			ans.push_back(kid[n][i]);
			dfs(kid[n][i]);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,q;
	cin>>n>>q;
	for(int i=2;i<=n;i++)
	{
		cin>>a[i];
		kid[a[i]].push_back(i);
	}
	for(int i=n;i>0;i--)
	{
		nok[a[i]]+=nok[i]+1;
	}
	ans.push_back(1);
	dfs(1);
	for(int i=1;i<=n;i++)
	{
		sna[ans[i]]=i;
	}
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		if(b>nok[a]+1)
		{
			cout<<-1<<endl;continue;
		}
		cout<<ans[sna[a]+b-1]<<endl;
	}
	return 0;
}

