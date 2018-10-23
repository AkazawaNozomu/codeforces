#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=700+5;
bool dp1[maxn][maxn],dp2[maxn][maxn];
ll a[maxn],g[maxn][maxn];
//dp1[i,j]:根i,右子树i+1~j dp2[i,j]:根j,右子树i~j-1
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp1[i][i]=dp2[i][i]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			g[i][j]=__gcd(a[i],a[j]);
		}
	}
	for(int l=2;l<=n;l++)//区间长度
	{
		for(int i=1;i+l-1<=n;i++)
		{
			for(int j=i+1;j<i+l;j++)
			{
				if(g[i][j]!=1&&dp1[i+1][j]&&dp2[j][i+l-1])
				{
					dp2[i][i+l-1]=1;
					break;
				}
			}
		}
		for(int i=l;i<=n;i++)
		{
			for(int j=i-l+1;j<i;j++)
			{
				if(g[i][j]!=1&&dp1[i-l+1][j]&&dp2[j][i-1])
				{
					dp1[i-l+1][i]=1;
					break;
				}
			}
		}
	}
	bool f=0;
	for(int i=1;i<=n;i++)
	{
		if(dp1[1][i]&&dp2[i][n])
		{
			f=1;break;
		}
	}
	if(f)cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
