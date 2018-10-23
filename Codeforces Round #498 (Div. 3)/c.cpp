#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+5;
ll d[maxn];
ll pre[maxn],pos[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	ll ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>d[i];
		if(i>0)pre[i]=pre[i-1]+d[i];
		else pre[i]=d[i];
		//cout<<pre[i]<<endl;
	}
	for(int i=n-1;i>=0;i--)
	{
		pos[i]=pos[i+1]+d[i];
		//cout<<pos[i]<<endl;
	}
	int p1=0,p2=n-1;
	while(p1<p2)
	{
		if(pre[p1]==pos[p2])
		{
			ans=pre[p1];
			p1++;
			p2--;
		}
		else if(pre[p1]<pos[p2])p1++;
		else p2--;
		//cout<<p1<<" "<<p2<<endl;
	}
	if(n==1)ans=0;
	cout<<ans<<endl;
	return 0;
}

