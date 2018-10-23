#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e3+5;
bool a[maxn][maxn],vis[maxn][maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		for(int j=0;j<m;j++)
		{
			if(s[j]=='#')a[i][j]=1;
			else if(s[j]=='.')a[i][j]=0;
		}
	}
	bool ok=1;
	for(int i=0;i+2<n;i++)
	{
		for(int j=0;j+2<m;j++)
		{
			if(a[i][j]&&a[i+1][j]&&a[i+2][j]&&a[i][j+1]&&a[i+2][j+1]&&a[i][j+2]&&a[i+1][j+2]&&a[i+2][j+2])
			{
				vis[i][j]=vis[i+1][j]=vis[i+2][j]=vis[i][j+1]=vis[i+2][j+1]=vis[i][j+2]=vis[i+1][j+2]=vis[i+2][j+2]=1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]!=vis[i][j])
			{
				ok=0;
				break;
			}
		}
	}
	if(ok)cout<<"yes\n";
	else cout<<"no\n";
	return 0;
}

