#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=30+5;
bool p[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll m,n,t;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<1<<endl;
		fflush(stdout);
		cin>>t;
		if(t==0)return 0;
		if(t==1)p[i]=1;
	}
	ll l=1,r=1+m,cur=1;
	while(1)
	{
		ll mid=(l+r)/2;
		cout<<mid<<endl;
		fflush(stdout);
		cin>>t;
		if(t==0)return 0;
		if(((t==1)&&p[cur])||((t==-1)&&(!p[cur])))l=mid+1;
		else r=mid;
		cur%=n;
		cur+=1;
	}
	return 0;
}

