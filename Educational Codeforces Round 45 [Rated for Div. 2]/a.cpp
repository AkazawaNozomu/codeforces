#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll n,m,a,b;
	cin>>n>>m>>a>>b;
	if(n%m==0)
	{
		cout<<0<<endl;return 0;
	}
	else
	{
		ll t=n%m;
		ll ans1=t*b;
		ll ans2=(m-t)*a;
		cout<<min(ans1,ans2)<<endl;
		return 0;
	}
}

