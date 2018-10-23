#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=100;
int n,m,cnt[maxn+5],t;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>t;
		cnt[t]++;
	}
	sort(cnt+1,cnt+maxn+1,cmp);
	//cout<<cnt[1]<<endl;
	int ans=1;
	for(;ans<=maxn/n;ans++)
	{
		int cur=1,curs=0,f=0;
		for(int i=1;i<=n;i++)
		{
			if(cnt[cur]<curs+ans)
			{
				cur++;curs=0;
			}
			curs+=ans;
			if(cnt[cur]<curs)
			{
				f=1;break;
			}
		}
		if(f)break;
	}
	ans--;
	cout<<ans<<endl;
	return 0;
}

