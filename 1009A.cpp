#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e3+5;
int c[maxn],a[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m,pc=0,pa=0,ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(c[pc]>a[pa])pc++;
		else
		{
			pa++;pc++;ans++;
		}
		if(pa>=m)break;
	}
	cout<<ans<<endl;
	return 0;
}

