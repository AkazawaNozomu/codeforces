#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
ll s[maxn];
//6 2:5 6 3 4 1 2
//7 3:5 6 7 2 3 4 1
//8 3:6 7 8 3 4 5 1 2 ->32165487 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll n,ans,maxc,cur;
	cin>>n;
	maxc=n+1;
	ans=1;
	for(int i=2;i*2<=n;i++)//len of lis
	{
		cur=i;
		cur+=n/i;
		if(n%i)cur++;
		if(cur<maxc)
		{
			maxc=cur;
			ans=i;
		}
	}
	//cout<<ans<<endl;
	cur=n;
	for(int i=0;i<n/ans;i++)
	{
		for(int j=ans-1;j>=0;j--)
		{
			//cout<<i<<j<<cur<<endl;
			s[i*ans+j]=cur;
			cur--;
		}
	}
	for(int i=n-1;cur>0;i--)
	{
		s[i]=cur;
		cur--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<endl;
	return 0;
}

